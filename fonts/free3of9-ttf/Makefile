PKG_ARCH=	*

COMMENT=	3 of 9 (code 39) barcode fonts

DISTNAME=	free3of9
EXTRACT_SUFX=	.zip
PKGNAME=	free3of9-ttf-20110209
CATEGORIES=	fonts x11

HOMEPAGE=	http://www.squaregear.net/fonts/free3of9.shtml

# MIT
PERMIT_PACKAGE=	Yes

SITES=		http://www.squaregear.net/fonts/

NO_BUILD=	Yes
NO_TEST=	Yes

WRKDIST=	${WRKDIR}

do-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/fonts/free3of9
	${INSTALL_DATA} ${WRKSRC}/*.{txt,ttf} ${PREFIX}/share/fonts/free3of9

.include <bsd.port.mk>
