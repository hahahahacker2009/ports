COMMENT=	picture viewer for X, with thumbnail-based file selector
DISTNAME=	xzgv-0.9
REVISION=	9
CATEGORIES=	graphics
FIX_EXTRACT_PERMISSIONS=Yes

HOMEPAGE=	https://xzgv.sourceforge.net/

# GPLv2+
PERMIT_PACKAGE=	Yes

WANTLIB =  GL X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi Xinerama
WANTLIB += Xrandr Xrender atk-1.0 c cairo expat fontconfig freetype
WANTLIB += gdk-x11-2.0>=0.11 gdk_pixbuf-2.0 gio-2.0 glib-2.0 gmodule-2.0
WANTLIB += gobject-2.0 gthread-2.0 gtk-x11-2.0>=0.11 harfbuzz iconv intl
WANTLIB += m pango-1.0 pangocairo-1.0 pangoft2-1.0 pixman-1 png pthread
WANTLIB += xcb xcb-render xcb-shm z

SITES=		${SITE_SOURCEFORGE:=xzgv/}

LIB_DEPENDS+=   x11/gtk+2


NO_TEST=	Yes

pre-configure:
	@${SUBST_CMD} ${WRKSRC}/doc/xzgv.1 ${WRKSRC}/doc/xzgv.texi

.include <bsd.port.mk>
