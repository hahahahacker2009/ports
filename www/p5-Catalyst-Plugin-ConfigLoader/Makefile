COMMENT=	catalyst plugin to Config::Any

MODULES=	cpan
PKG_ARCH=	*
DISTNAME=	Catalyst-Plugin-ConfigLoader-0.35
CATEGORIES=	www

# Perl
PERMIT_PACKAGE=	Yes

RUN_DEPENDS=	devel/p5-Config-Any>=0.23 \
		devel/p5-Data-Visitor \
		devel/p5-MRO-Compat \
		www/p5-Catalyst-Runtime>=5.80024

MAKE_ENV=	TEST_POD=Yes

CONFIGURE_ARGS=	--skipdeps

.include <bsd.port.mk>
