COMMENT =	fontconfig-based alternative to banner(1)

PKGNAME =	fcbanner-0.0.20040302
REVISION =	0
DISTFILES =	fcbanner.c

CATEGORIES =	textproc

HOMEPAGE =	https://www.normalesup.org/~george/comp/fcbanner/
SITES =		${HOMEPAGE}

# BSD
PERMIT_PACKAGE =	Yes

WANTLIB =	c fontconfig freetype z

do-extract:
	cp ${DISTDIR}/fcbanner.c ${WRKSRC}/

do-build:
	cd ${WRKSRC}; \
	    ${CC} -Wall -W -std=c99 -D_XOPEN_SOURCE=600 ${CFLAGS} -o fcbanner \
	    `pkg-config --cflags freetype2 fontconfig` fcbanner.c \
	    `pkg-config --libs freetype2 fontconfig`; \
	    sed '/^*/q' < fcbanner.c > fcbanner.txt

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/fcbanner ${PREFIX}/bin
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/fcbanner
	${INSTALL_DATA} ${WRKSRC}/fcbanner.txt ${PREFIX}/share/doc/fcbanner

NO_TEST =	Yes

.include <bsd.port.mk>
