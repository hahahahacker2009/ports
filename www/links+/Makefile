COMMENT=	graphics and text browser
VER=		2.29
DISTNAME=	links-${VER}
PKGNAME=	links+-${VER}
CATEGORIES=	www
REVISION=	0

HOMEPAGE=	http://links.twibright.com/

MAINTAINER=	Tim Meunier <trondd@kagu-tsuchi.com>

# GPLv2+
PERMIT_PACKAGE=	Yes

WANTLIB=	bz2 c crypto event lzma pthread ssl z

SITES=		http://links.twibright.com/download/

LIB_DEPENDS=	archivers/bzip2 \
		archivers/xz

CONFIGURE_STYLE= gnu
CONFIGURE_ARGS+= --with-ssl --without-brotli --without-lzip --without-zstd

FLAVORS=	no_x11
FLAVOR?=

.if !${FLAVOR:Mno_x11}
LIB_DEPENDS+=	graphics/jpeg \
		graphics/png \
		x11/gnome/librsvg \
		graphics/tiff \
		graphics/libwebp \
		graphics/libavif
CONFIGURE_ARGS+= --with-x --enable-graphics
WANTLIB+=	X11 jpeg>=62 m png tiff>=35
WANTLIB+=	cairo freetype fontconfig gdk_pixbuf-2.0 gio-2.0
WANTLIB+=	glib-2.0 gobject-2.0 intl rsvg-2 webp avif

MESSAGE=	${PKGDIR}/MESSAGE.x11
.endif

MAKE_FLAGS=	CFLAGS="${CFLAGS} -DEVENT_DEPRECATED"
NO_TEST=	Yes

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/links+
	${INSTALL_DATA} ${WRKSRC}/doc/links_cal/* ${PREFIX}/share/links+

.include <bsd.port.mk>
