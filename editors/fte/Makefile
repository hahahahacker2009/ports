COMMENT=	powerful and intuitive editor for programmers

DISTNAME=	fte-20090118
REVISION =	3
CATEGORIES=	editors devel

HOMEPAGE=	https://fte.sourceforge.net/

# GPLv2 or later / Artistic License
PERMIT_PACKAGE=	Yes

WANTLIB+=	X11 Xau Xdmcp Xpm c m ${COMPILER_LIBCXX}

COMPILER =		base-clang ports-gcc base-gcc

SITES=		ftp://ftp.mrsserver.net/pub/distfiles/

NO_TEST=	Yes

MAKE_ENV+=	CC="${CC}" CXX="${CXX}"

post-install:
		${INSTALL_DATA_DIR} ${PREFIX}/share/doc/fte
		${INSTALL_DATA} ${WRKSRC}/doc/*.html ${PREFIX}/share/doc/fte/

.include <bsd.port.mk>
