COMMENT=	library for gnome keyring integration

GNOME_PROJECT=	libgnome-keyring
GNOME_VERSION=	3.12.0
REVISION=	11

SHARED_LIBS +=  gnome-keyring        7.0      # 2.0

# GPLv2/LGPLv2
PERMIT_PACKAGE=	Yes

WANTLIB =  dbus-1 execinfo ffi gcrypt glib-2.0 gmodule-2.0 gobject-2.0
WANTLIB += gpg-error iconv intl pcre2-8 pthread

MODULES=	x11/gnome

MODGNOME_TOOLS=	gobject-introspection vala

LIB_DEPENDS=	security/libgcrypt \
		x11/dbus \
		devel/glib2

# XXX circular dependency, see x11/gnome/keyring
# org.freedesktop.secrets; gnome-keyring-*|keepassxc-*:x11/gnome/keyring
#RUN_DEPENDS +=		x11/gnome/keyring

CONFIGURE_STYLE=	gnu

# regression tests call 'env python'
MODULES +=		lang/python
TEST_DEPENDS +=		${MODPY_RUN_DEPENDS} \
			devel/py-gobject3${MODPY_FLAVOR} #test-gi.py
MODPY_RUNDEP=		No
MODPY_BUILDDEP=		No
pre-test:
	ln -sf ${MODPY_BIN} ${WRKDIR}/bin/python

.include <bsd.port.mk>
