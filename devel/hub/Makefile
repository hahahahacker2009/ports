COMMENT =		wraps git in order to extend it with extra features

GH_ACCOUNT =		github
GH_PROJECT =		hub
GH_TAGNAME =		v2.2.3
REVISION=		2

CATEGORIES =		devel

HOMEPAGE =		https://hub.github.com

MAINTAINER =		Fabian Raetz <fabian.raetz@gmail.com>
# MIT
PERMIT_PACKAGE =	Yes

WANTLIB += c pthread

MODULES =		lang/go

RUN_DEPENDS =		devel/git

post-install:
	${INSTALL_MAN} ${WRKSRC}/man/hub.1 ${PREFIX}/man/man1/

.include <bsd.port.mk>
