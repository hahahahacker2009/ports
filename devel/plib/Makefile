COMMENT =	suite of portable game libraries

DISTNAME =	plib-1.8.5
REVISION =	7
CATEGORIES =	devel games

HOMEPAGE =	https://plib.sourceforge.net/
SITES =		${HOMEPAGE}/dist/

# LGPLv2
PERMIT_PACKAGE =	Yes


CONFIGURE_STYLE =	gnu
CONFIGURE_ARGS =	--with-GL=${X11BASE}
USE_X11 =		Yes
CXXFLAGS +=		-fPIC

.include <bsd.port.mk>
