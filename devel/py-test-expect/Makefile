COMMENT =		py.test plugin to store test expectations

MODPY_EGG_VERSION =	1.1.0
DISTNAME =		pytest-expect-${MODPY_EGG_VERSION}
PKGNAME =		${DISTNAME:S/py/py-/}
CATEGORIES =		devel
REVISION =		8

HOMEPAGE =		https://github.com/gsnedders/pytest-expect

# MIT
PERMIT_PACKAGE =	Yes

MODULES =		lang/python

MODPY_PI =		Yes
MODPY_PYBUILD =		setuptools

FLAVORS =		python3
FLAVOR =		python3

RUN_DEPENDS =		devel/py-test${MODPY_FLAVOR} \
			net/py-u-msgpack${MODPY_FLAVOR}

NO_TEST =		Yes

.include <bsd.port.mk>
