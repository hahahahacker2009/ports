COMMENT=		GNU patch

VERSION=		2.7.6
DISTNAME=		patch-${VERSION}
PKGNAME=		gpatch-${VERSION}
CATEGORIES=		devel
REVISION=		0

HOMEPAGE=		https://www.gnu.org/software/patch/

# GPLv3+
PERMIT_PACKAGE=	Yes

WANTLIB=		c

SITES=			${SITE_GNU:=patch/}
EXTRACT_SUFX=		.tar.xz

CONFIGURE_STYLE=	gnu
CONFIGURE_ARGS=		--program-prefix=g
MODGNU_CONFIG_GUESS_DIRS=${WRKSRC}/build-aux

post-install:
	@rm ${PREFIX}/lib/charset.alias

.include <bsd.port.mk>
