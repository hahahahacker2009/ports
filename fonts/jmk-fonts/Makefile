PKG_ARCH=		*

COMMENT=		nice fixed width fonts, easy on the eye

V=			3.0
REVISION=		6
DISTNAME=		jmk-x11-fonts-${V}
PKGNAME=		jmk-fonts-${V}
FIX_EXTRACT_PERMISSIONS=Yes

CATEGORIES=		fonts x11

HOMEPAGE=		http://www.jmknoble.net/fonts/

# GPL
PERMIT_PACKAGE=	Yes

SITES=			${HOMEPAGE}

CONFIGURE_STYLE=	imake


NO_TEST=		Yes

post-install:
	cd ${PREFIX}/share/fonts/jmk && mv fonts.alias fonts.alias-jmk

.include <bsd.port.mk>
