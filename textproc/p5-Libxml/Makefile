COMMENT=	perl module collection for working with XML

MODULES=	cpan
PKG_ARCH=	*
VERSION=	0.08
DISTNAME=	libxml-perl-${VERSION}
PKGNAME=	p5-Libxml-${VERSION}
REVISION=	3
CATEGORIES=	textproc
SITES=		${SITE_PERL_CPAN:=XML/}

RUN_DEPENDS=	textproc/p5-XML-Parser>=2.19
BUILD_DEPENDS=	${RUN_DEPENDS}

# GPL/Artistic
PERMIT_PACKAGE=	Yes

.include <bsd.port.mk>
