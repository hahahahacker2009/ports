COMMENT=	lame ain't an MP3 encoder
#'

DISTNAME=	lame-3.100
REVISION=	2

SHARED_LIBS +=  mp3lame              2.2      # 0.0

CATEGORIES=	audio

HOMEPAGE=	https://lame.sourceforge.net/

MAINTAINER=	Antoine Jacoutot <ajacoutot@openbsd.org>

# LGPLv2 - patent restriction
PERMIT_PACKAGE=	Yes

WANTLIB += c curses iconv m

SITES=		${SITE_SOURCEFORGE:=lame/}

LIB_DEPENDS=	converters/libiconv

CONFIGURE_STYLE=gnu
CONFIGURE_ARGS= --disable-cpml \
		--disable-mp3x \
		--enable-mp3rtp \
		--without-dmalloc \
		--with-fileio=lame

.if ${MACHINE_ARCH} == "i386"
BUILD_DEPENDS+=	devel/nasm
CONFIGURE_ARGS+= --enable-nasm
# gmake required for i386/ directory
USE_GMAKE=	Yes
.else
CONFIGURE_ARGS+= --disable-nasm
.endif

MAKE_FLAGS=	pkghtmldir=${TRUEPREFIX}/share/doc/lame

.include <bsd.port.mk>
