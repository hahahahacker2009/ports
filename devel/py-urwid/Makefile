COMMENT =	console user interface library for python

MODPY_EGG_VERSION = 2.0.1
DISTNAME =	urwid-${MODPY_EGG_VERSION}
PKGNAME =	py-${DISTNAME}
CATEGORIES =	devel
EPOCH =		0
REVISION =	6

HOMEPAGE =	http://urwid.org/

MAINTAINER =	Clem Atis <clematis@insiberia.net>

# LGPLv2.1
PERMIT_PACKAGE =	Yes

WANTLIB += pthread ${MODPY_WANTLIB}

TEST_DEPENDS =	devel/py-gobject3${MODPY_FLAVOR}

MODULES =	lang/python
MODPY_PYBUILD =		setuptools
MODPY_PI =	Yes

MODPY_PYTEST_ARGS = urwid/tests

FLAVORS =	python3
FLAVOR =	python3

.include <bsd.port.mk>
