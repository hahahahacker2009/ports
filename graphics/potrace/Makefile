COMMENT=	transform bitmaps into vector graphics

DISTNAME=	potrace-1.16
SHARED_LIBS +=  potrace              0.1      # 0.3
CATEGORIES=	graphics
REVISION=	0

HOMEPAGE=	https://potrace.sourceforge.net

# GPLv2+
PERMIT_PACKAGE=	Yes

WANTLIB += c m z

SITES=		${SITE_SOURCEFORGE:=potrace/}

CONFIGURE_STYLE=	gnu
CONFIGURE_ARGS+=	--with-libpotrace

TEST_DEPENDS=	print/ghostscript/gnu

.include <bsd.port.mk>
