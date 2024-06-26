COMMENT=	video stream processing tools

DISTNAME=	transcode-1.1.7
REVISION=	22
CATEGORIES=	multimedia

HOMEPAGE=	https://bitbucket.org/achurch_/transcode/

SITES=		https://bitbucket.org/france/transcode-tcforge/downloads/
EXTRACT_SUFX=	.tar.bz2

# GPLv2
PERMIT_PACKAGE=	Yes

WANTLIB += ${COMPILER_LIBCXX} ICE SDL SM X11 Xau Xaw Xdmcp Xext
WANTLIB += Xmu Xpm Xt Xv a52 aom avcodec avformat avutil bz2 c
WANTLIB += crypto dav1d dv dvdread freetype gsm iconv jpeg lzma
WANTLIB += m mp3lame mpeg2 mpeg2convert ogg opus postproc sndio
WANTLIB += speex ssl swresample theora theoradec theoraenc usbhid
WANTLIB += vorbis vorbisenc vorbisfile vpx x264 x265 xcb xml2
WANTLIB += z

# xvidcore is dlopen()d so check-lib-depends shows it as Extra, however we
# want to track changes to the ABI to ensure transcode is updated if needed.
WANTLIB += xvidcore

COMPILER =		base-clang ports-gcc base-gcc

FLAVORS=	lzo mjpegtools altivec
FLAVOR?=

.if ${MACHINE_ARCH} == "i386"
PKG_ARGS+=	-Di386=1
.else
PKG_ARGS+=	-Di386=0
.endif

AUTOCONF_VERSION= 2.68
AUTOMAKE_VERSION= 1.11

LIB_DEPENDS=	audio/lame \
		audio/liba52 \
		audio/libogg \
		audio/libvorbis \
		devel/libdvdread \
		devel/sdl \
		graphics/ffmpeg \
		graphics/jpeg \
		graphics/libmpeg2 \
		multimedia/libdv \
		multimedia/libtheora \
		multimedia/x264 \
		multimedia/xvidcore \
		textproc/libxml

RUN_DEPENDS=	audio/sox \
		audio/vorbis-tools \
		audio/twolame \
		graphics/ffmpeg \
		x11/mplayer

SEPARATE_BUILD=	Yes
LIBTOOL_FLAGS+=	--tag=disable-static
CONFIGURE_STYLE= autoreconf
MODGNU_CONFIG_GUESS_DIRS=${WRKSRC}/autotools
CONFIGURE_ARGS+=--enable-a52 \
		--enable-bktr \
		--enable-freetype2 \
		--enable-lame \
		--enable-libdv \
		--enable-libdvdread \
		--enable-libiconv \
		--enable-libjpeg \
		--enable-libmpeg2 \
		--enable-libmpeg2convert \
		--enable-libpostproc \
		--enable-libxml2 \
		--enable-netstream \
		--enable-ogg \
		--enable-sdl \
		--enable-statbuffer \
		--enable-sndio \
		--enable-theora \
		--enable-vorbis \
		--enable-xvid \
		--enable-x264 \
		--disable-x86-textrels
CONFIGURE_ENV+=	CPPFLAGS="-I${X11BASE}/include -I${LOCALBASE}/include" \
		LDFLAGS="-L${X11BASE}/lib -L${LOCALBASE}/lib"

.if ${FLAVOR:Mlzo}
CONFIGURE_ARGS+=--enable-lzo
WANTLIB +=	lzo2
LIB_DEPENDS+=	archivers/lzo2
PKG_ARGS+=	-Dlzo=1
.else
PKG_ARGS+=	-Dlzo=0
.endif

.if ${FLAVOR:Mmjpegtools}
CONFIGURE_ARGS+=--enable-mjpegtools
WANTLIB +=	mjpegutils
LIB_DEPENDS+=	multimedia/mjpegtools
RUN_DEPENDS+=	multimedia/mjpegtools
PKG_ARGS+=	-Dmjpegtools=1
.else
PKG_ARGS+=	-Dmjpegtools=0
.endif

.if ${FLAVOR:Maltivec}
ONLY_FOR_ARCHS=	powerpc powerpc64
CONFIGURE_ARGS+=--enable-altivec
.else
CONFIGURE_ARGS+=--disable-altivec
.endif

post-extract:
	@cp ${FILESDIR}/import_sndio.c ${WRKSRC}/import

post-install:
	@rm -f ${PREFIX}/lib/transcode/*.la

.include <bsd.port.mk>
