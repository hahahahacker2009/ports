COMMENT=	graphical interface for GnuPG

DISTNAME=	gpa-0.10.0
CATEGORIES=    	security x11
REVISION=	0

HOMEPAGE=	https://www.gnupg.org/software/gpa/

# GPLv2
PERMIT_PACKAGE=	Yes

WANTLIB =  X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi Xinerama Xrandr
WANTLIB += Xrender assuan atk-1.0 c cairo fontconfig freetype
WANTLIB += gdk-x11-2.0 gdk_pixbuf-2.0 gio-2.0 glib-2.0 gobject-2.0
WANTLIB += gpg-error gpgme gtk-x11-2.0 harfbuzz iconv intl m pango-1.0
WANTLIB += pangocairo-1.0 pangoft2-1.0 pthread z

SITES = 	https://gnupg.org/ftp/gcrypt/gpa/
EXTRACT_SUFX=	.tar.bz2

RUN_DEPENDS=	devel/desktop-file-utils
LIB_DEPENDS=	devel/gettext,-runtime \
		security/gpgme \
		x11/gtk+2

CONFIGURE_STYLE=	gnu

.include <bsd.port.mk>
