COMMENT =		arc4random for Tcl

GH_ACCOUNT =		aryler
GH_PROJECT =		Tclarc4random
GH_TAGNAME =		0.3
DISTNAME =		tclarc4random-${GH_TAGNAME}
REVISION =		0

CATEGORIES =		devel
MAINTAINER =		Stuart Cassoff <stwo@users.sourceforge.net>

# ISC
PERMIT_PACKAGE =	Yes

MODULES =		lang/tcl
BUILD_DEPENDS =		${MODTCL_BUILD_DEPENDS}
RUN_DEPENDS =		${MODTCL_RUN_DEPENDS}
SEPARATE_BUILD =	Yes
CONFIGURE_STYLE =	simple
CONFIGURE_SCRIPT =	itzev
CONFIGURE_ARGS +=	-tcl ${MODTCL_VERSION}

.include <bsd.port.mk>
