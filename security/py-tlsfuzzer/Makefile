COMMENT =		fuzzer and test suite for TLS implementations.

MODPY_EGG_VERSION =	20231209
DISTNAME =		tlsfuzzer-${MODPY_EGG_VERSION}
PKGNAME =		py-${DISTNAME}
CATEGORIES =		security

GH_ACCOUNT =		tlsfuzzer
GH_PROJECT =		tlsfuzzer
GH_COMMIT =		f8762584c536cfad0b7eff8dbdac914845e8fe4a
REVISION =		0

MAINTAINER =		Theo Buehler <tb@openbsd.org>

MODPY_PYTEST =		Yes

FLAVOR =		python3
FLAVORS =		python3

WANTLIB +=		${MODPY_WANTLIB}

RUN_DEPENDS +=		net/py-tlslite-ng${MODPY_FLAVOR}

# GPLv2
PERMIT_PACKAGE =	Yes

MODULES =		lang/python

TEST_DEPENDS +=         devel/py-mock${MODPY_FLAVOR}

TEST_ENV +=		PYTHONPATH=${WRKSRC}/src

SCRIPTS_DIR = ${PREFIX}/share/tlsfuzzer/scripts
post-install:
	${INSTALL_DATA_DIR} ${SCRIPTS_DIR}
	cd ${WRKSRC}/scripts && pax -rw *.py ${SCRIPTS_DIR}
	${MODPY_BIN} -m compileall ${SCRIPTS_DIR}

.include <bsd.port.mk>
