# Does _not_ depend on desktop-file-utils, hicolor-icon-theme,
# gtk-update-icon-cache, shared-mime-info... on purpose as it should
# only use whatever is available on the system at runtime.

COMMENT=		utilities to assist desktop integration tasks

V=			1.2.1
DISTNAME=		xdg-utils-${V}

CATEGORIES=		devel

HOMEPAGE=		https://wiki.freedesktop.org/www/Software/xdg-utils/

MAINTAINER=		Antoine Jacoutot <ajacoutot@openbsd.org>

# MIT
PERMIT_PACKAGE=	Yes

SITES=			https://gitlab.freedesktop.org/xdg/xdg-utils/-/archive/v${V}/
WRKDIST=		${WRKDIR}/xdg-utils-v${V}-356c380ad6fecc9ce6bea1f6a77986ba67402c80

PKG_ARCH=		*
USE_GMAKE=		Yes

BUILD_DEPENDS=		textproc/xmlto

CONFIGURE_STYLE=	gnu

pre-configure:
	sed -i -e 's,/usr/local/share,${LOCALBASE}/share,g;' \
		-e 's,/etc/xdg,${SYSCONFDIR}/xdg,g' \
		${WRKSRC}/scripts/xdg-*.in

post-install:
	# Official NetBeans does not know about OpenBSD, thus at least
	# some java apps use 'email' and 'open' as fallbacks.
	ln -s xdg-email ${PREFIX}/bin/email
	ln -s xdg-open ${PREFIX}/bin/open

do-test:
	cd ${WRKSRC}/autotests && ${MAKE_PROGRAM}

.include <bsd.port.mk>
