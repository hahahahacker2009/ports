COMMENT=	point-to-point bandwidth measurement tool

DISTNAME=	bing-1.0.5
REVISION=	3
CATEGORIES=	net
SITES=		https://distfiles.sigtrap.nl/

# BSD
PERMIT_PACKAGE=	Yes

WANTLIB=	c

NO_TEST=	Yes

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/bing
	${INSTALL_DATA} ${WRKSRC}/README ${PREFIX}/share/doc/bing

.include <bsd.port.mk>
