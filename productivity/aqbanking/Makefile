COMMENT=	online banking interface and financial data framework

DISTNAME=	aqbanking-6.5.3

SHARED_LIBS +=  aqbanking            4.0      # .46.2

CATEGORIES=	productivity

HOMEPAGE=	https://www.aquamaniac.de

# GPLv2 or GPLv3
PERMIT_PACKAGE =	Yes

WANTLIB =  brotlidec brotlienc c ffi gcrypt gmp gnutls gpg-error
WANTLIB += gwenhywfar hogweed iconv idn2 intl ltdl lzma m nettle p11-kit
WANTLIB += pthread tasn1 unistring xml2 xmlsec1 xslt z zstd

SITES=			https://www.aquamaniac.de/rdm/attachments/download/467/

BUILD_DEPENDS=		devel/gettext,-tools
LIB_DEPENDS=		devel/gmp \
			devel/gwenhywfar \
			devel/libtool,-ltdl \
			security/gnutls \
			security/xmlsec

USE_GMAKE=		Yes
# ld: error: duplicate symbol: AO_V2_MkOfxHeader
USE_LIBTOOL=		gnu

CONFIGURE_STYLE=	gnu
CONFIGURE_ARGS+=	--enable-release=yes

CONFIGURE_ENV=		CPPFLAGS="-I${LOCALBASE}/include" \
			LDFLAGS="-L${LOCALBASE}/lib -lintl"

pre-configure:
	${SUBST_CMD} ${WRKSRC}/aqbanking-config.cmake.in

.include <bsd.port.mk>
