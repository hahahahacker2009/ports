COMMENT=	audio file volume normalizer

DISTNAME=	normalize-0.7.7
REVISION=	7
CATEGORIES=	audio

SITES=		${SITE_SAVANNAH:=normalize/}

HOMEPAGE=	http://normalize.nongnu.org/

# GPLv2+
PERMIT_PACKAGE=	Yes

WANTLIB=	c iconv intl m mad>=2 audiofile FLAC ogg

LIB_DEPENDS=	audio/libmad \
		devel/gettext,-runtime \
		devel/libaudiofile

CONFIGURE_STYLE= gnu

CONFIGURE_ARGS=	--with-mad \
		--with-audiofile

CONFIGURE_ENV=	CPPFLAGS="-I${LOCALBASE}/include" \
		LDFLAGS="-L${LOCALBASE}/lib"

MODGNU_CONFIG_GUESS_DIRS=${WRKSRC}/config

.include <bsd.port.mk>
