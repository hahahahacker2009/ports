COMMENT =	modern IRC client written in GTK
CATEGORIES =	net

GH_ACCOUNT =	SrainApp
GH_PROJECT =	srain
GH_TAGNAME =	1.1.1
REVISION =	1

HOMEPAGE =	https://srain.im/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += atk-1.0 c cairo cairo-gobject config crypto gdk-3 gdk_pixbuf-2.0
WANTLIB += gio-2.0 glib-2.0 gobject-2.0 gtk-3 harfbuzz intl pango-1.0
WANTLIB += pangocairo-1.0 secret-1 soup-2.4 ssl gmodule-2.0 pthread

# C11
COMPILER =	base-clang ports-gcc
COMPILER_LANGS =	c

BUILD_DEPENDS =	devel/gettext,-tools

LIB_DEPENDS =	devel/libconfig \
		devel/libsoup \
		x11/gnome/libsecret \
		x11/gtk+3

RUN_DEPENDS =	devel/desktop-file-utils \
		x11/gnome/keyring \
		x11/gtk+4,-guic

CONFIGURE_STYLE =	simple
CONFIGURE_ARGS =	--disable-debug \
			--sysconfdir="${SYSCONFDIR}"

USE_GMAKE =	Yes
ALL_TARGET =	default
MAKE_FLAGS =	CC="${CC}" MAKE="${MAKE_PROGRAM}"

FAKE_FLAGS =	INSTALL="${INSTALL}" \
		SYSCONFDIR="${PREFIX}/share/examples"

NO_TEST =	Yes

.include <bsd.port.mk>
