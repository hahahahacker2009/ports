CATEGORIES ?=	fonts x11 japanese korean

HOMEPAGE ?=	https://kldp.net/unfonts/

SITES ?=	https://kldp.net/unfonts/release/

WRKDIST = 	${WRKDIR}/un-fonts

# GPLv2
PERMIT_PACKAGE =	Yes

FONTDIR ?=	${PREFIX}/share/fonts/korean

NO_BUILD ?=	yes
NO_TEST ?=	yes
PKG_ARCH ?=	*

do-install:
	${INSTALL_DATA_DIR} ${FONTDIR}
	${INSTALL_DATA} ${WRKSRC}/*.ttf ${FONTDIR}
