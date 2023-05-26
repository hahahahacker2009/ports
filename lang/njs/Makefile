COMMENT=	NGINX JavaScript command line utility and static library

GH_ACCOUNT=	nginx
GH_PROJECT=	njs
GH_TAGNAME=	0.7.12

CATEGORIES=	lang www

HOMEPAGE=	https://nginx.org/en/docs/njs/

MAINTAINER=	Sergey A. Osokin <osa@FreeBSD.org>

# 2 clause BSD
PERMIT_PACKAGE=	Yes

WANTLIB=	c crypto pcre2-8 readline ssl xml2 z

LIB_DEPENDS=	devel/pcre2 \
		textproc/libxml

CONFIGURE_STYLE=simple

ALL_TARGET=	libnjs njs

do-install:
	${INSTALL_PROGRAM} ${WRKDIST}/build/njs ${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/src/*.h ${PREFIX}/include
	${INSTALL_DATA} ${WRKSRC}/build/njs_auto_config.h ${PREFIX}/include
	${INSTALL_DATA} ${WRKSRC}/build/libnjs.a ${PREFIX}/lib
	${INSTALL_DATA} ${WRKSRC}/build/njs.pc ${PREFIX}/lib/pkgconfig

.include <bsd.port.mk>