V =		2.22.6
COMMENT =	command line parser for c programs
DISTNAME =	gengetopt-${V}
CATEGORIES =	devel
REVISION =	4

HOMEPAGE =	http://www.gnu.org/software/gengetopt/

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += c m ${COMPILER_LIBCXX}

COMPILER =	base-clang ports-gcc base-gcc

SITES =		${SITE_GNU:=gengetopt/}

CONFIGURE_STYLE = gnu

.include <bsd.port.mk>
