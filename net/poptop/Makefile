COMMENT=		PPTP Server

V=			1.3.4
DISTNAME=		pptpd-$V
PKGNAME=		poptop-$V
REVISION=		9
CATEGORIES=		net

HOMEPAGE=		https://poptop.sourceforge.net/

# GPLv2+
PERMIT_PACKAGE=	Yes

WANTLIB=		c util 

SITES=			${SITE_SOURCEFORGE:=poptop/}

CONFIGURE_STYLE=	gnu
CONFIGURE_ARGS+=	--with-bsdppp --with-pppd-ip-alloc
FAKE_FLAGS=		DESTDIR=
USE_GMAKE=		Yes

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/poptop
	${INSTALL_DATA} ${WRKSRC}/samples/pptpd.conf \
		${PREFIX}/share/examples/poptop/pptpd.conf-sample

.include <bsd.port.mk>
