COMMENT=		easy to use Bayesian spam filter
DISTNAME=		bmf-0.9.4
REVISION=		12
CATEGORIES=		mail
HOMEPAGE=		https://sourceforge.net/projects/bmf/

# GPL
PERMIT_PACKAGE=	Yes
WANTLIB=		c

SITES=			${SITE_SOURCEFORGE:=bmf/}

CONFIGURE_STYLE=	simple

FLAVORS=		mysql
FLAVOR?=

CONFIGURE_ARGS=		--without-mysql \
			--with-libdb

.if ${FLAVOR:Mmysql}
LIB_DEPENDS+=		databases/mariadb
WANTLIB +=		mariadb pthread
CONFIGURE_ARGS+=	--without-libdb --with-mysql="${LOCALBASE}"
CFLAGS+=		"-I${LOCALBASE}/include/mysql"
.endif

MAKE_ENV=		CC="${CC}"
INSTALL_TARGET=		MANDIR=${PREFIX}/man \
			BINDIR=${PREFIX}/bin \
			install

NO_TEST=		Yes

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/bmf
	${INSTALL_DATA} ${WRKSRC}/README ${PREFIX}/share/doc/bmf

.include <bsd.port.mk>
