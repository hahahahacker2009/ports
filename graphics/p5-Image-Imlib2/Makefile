COMMENT=	Perl interface to the Imlib2 image library

DISTNAME=	Image-Imlib2-2.03
REVISION=	5
CATEGORIES=	graphics

# Perl
PERMIT_PACKAGE=	Yes

WANTLIB += c perl Imlib2>=1

LIB_DEPENDS=	graphics/imlib2

MAKE_ENV=	TEST_POD=Yes

MODULES=	cpan
CONFIGURE_STYLE=modbuild

.include <bsd.port.mk>
