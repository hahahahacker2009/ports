COMMENT =	KDE configuration system
DISTNAME =	kconfig-${VERSION}

SHARED_LIBS =	KF5ConfigCore		8.0
SHARED_LIBS +=	KF5ConfigGui		8.0
SHARED_LIBS +=	KF5ConfigQml		0.0

WANTLIB += ${COMPILER_LIBCXX} Qt5Core Qt5DBus Qt5Gui Qt5Network
WANTLIB += Qt5Qml Qt5Xml c m

LIB_DEPENDS =	x11/qt5/qtdeclarative

# for tests
PORTHOME =		${WRKDIR}
TEST_IS_INTERACTIVE =	X11
DEBUG_PACKAGES =	${BUILD_PACKAGES}

.include <bsd.port.mk>
