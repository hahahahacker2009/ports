COMMENT =		support libraries and Ruby extensions extracted from Rails

DISTNAME =		activesupport-6.1.4.1
CATEGORIES =		devel
MAINTAINER =		Sebastian Reitenbach <sebastia@openbsd.org>
REVISION =		0

# MIT
PERMIT_PACKAGE =	Yes

MODULES =		lang/ruby

BUILD_DEPENDS +=	${RUN_DEPENDS}
RUN_DEPENDS +=		devel/ruby-concurrent-ruby,${MODRUBY_FLAVOR},>=1.0.2,<2 \
			devel/ruby-i18n,${MODRUBY_FLAVOR},>=0.7,<2 \
			devel/ruby-zeitwerk,${MODRUBY_FLAVOR}>=2.3,<3 \
			sysutils/ruby-tzinfo,${MODRUBY_FLAVOR}>=2.0,<3

CONFIGURE_STYLE = 	ruby gem

.include <bsd.port.mk>
