# V > 2.0 changes deps to gtk3 and .NET 6
V =		1.7.1
COMMENT =	open source drawing/editing program modeled after Paint.NET
DISTNAME =	pinta-${V}
CATEGORIES =	graphics x11
REVISION =	0

HOMEPAGE =	http://pinta-project.com/

# MIT
PERMIT_PACKAGE =	Yes

# These tarballs have a proper configure. GH checkout does not...
SITES =		https://github.com/PintaProject/Pinta/releases/download/${V}/

MODULES =	lang/mono \
		textproc/intltool

BUILD_DEPENDS =	devel/mono-addins \
		x11/mono-gtk2

RUN_DEPENDS =	devel/mono-addins \
		devel/desktop-file-utils \
		x11/gtk+4,-guic \
		x11/mono-gtk2

CONFIGURE_STYLE =	gnu
CONFIGURE_ENV =		CPPFLAGS="-I${LOCALBASE}/include" \
			LDFLAGS="-L${LOCALBASE}/lib"

USE_GMAKE =	Yes

DLLMAP_FILES =	Pinta.Docking/Pinta.Docking.dll.config

.include <bsd.port.mk>
