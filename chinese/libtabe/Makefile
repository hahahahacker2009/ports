COMMENT=	library for Chinese language processing

DISTNAME=	libtabe-0.2.6
PKGNAME=	zh-${DISTNAME}
REVISION=	8
CATEGORIES=	chinese
SHARED_LIBS +=	tabe                 2.1      # .0.0
SHARED_LIBS +=	bims                 2.1      # .0.0

HOMEPAGE=	https://libtabe.sourceforge.net/

# BSD
PERMIT_PACKAGE=	Yes

WANTLIB += c lib/db/db=3

SITES=		http://www.kpvs.tp.edu.tw/

LIB_DEPENDS=	databases/db/v3

CONFIGURE_STYLE= gnu dest
CONFIGURE_ARGS=	--with-db-inc=${LOCALBASE}/include/db \
		--with-db-lib=${LOCALBASE}/lib/db
MODGNU_CONFIG_GUESS_DIRS=${WRKSRC}/script

WRKDIST=	${WRKDIR}/libtabe
USE_X11 =	Yes

NO_TEST=	Yes

.include <bsd.port.mk>
