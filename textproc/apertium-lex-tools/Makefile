COMMENT =		module for compiling and processing lexical rules

V =			0.2.7
REVISION =		0
DISTNAME =		apertium-lex-tools-$V

CATEGORIES =		textproc

HOMEPAGE =		http://wiki.apertium.org/wiki/Constraint-based_lexical_selection_module

MAINTAINER =		Anthony J. Bentley <anthony@anjbe.name>

DEBUG_PACKAGES =	${BUILD_PACKAGES}

# GPLv2+
PERMIT_PACKAGE =	Yes

# uses pledge()

WANTLIB += ${COMPILER_LIBCXX}
WANTLIB += apertium3-3.7 c lttoolbox3-3.5 m xml2 z

COMPILER =		base-clang ports-gcc base-gcc

SITES =	https://github.com/apertium/apertium-lex-tools/releases/download/v$V/

EXTRACT_SUFX =		.tar.bz2

LIB_DEPENDS =		textproc/apertium \
			textproc/libxml \
			textproc/lttoolbox

AUTOCONF_VERSION =	2.71
AUTOMAKE_VERSION =	1.16

CONFIGURE_STYLE =	autoreconf

.include <bsd.port.mk>
