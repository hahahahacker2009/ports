COMMENT=	Kanji -> kana converter, perl interface

DISTNAME=	Text-Kakasi-2.04
PKGNAME=	p5-${DISTNAME}
REVISION=	5
CATEGORIES=	japanese converters textproc devel perl5

SITES=		${SITE_PERL_CPAN:=Text/}
MAINTAINER=	Marc Espie <espie@openbsd.org>

LIB_DEPENDS=	japanese/kakasi

# GPL
PERMIT_PACKAGE=	Yes

WANTLIB += c kakasi perl

CONFIGURE_STYLE= perl

.include <bsd.port.mk>
