QT5NAME =	QtQuickcontrols2

COMMENT-main =	Qt5 Quick based UI controls from Qt Labs

KDE_COMMIT =		134ca5dbef9d137a9c46faa79b0225bc650d9283
KDE_VERSION =		5

SHARED_LIBS +=  Qt5QuickControls2             1.1 # 5.9
SHARED_LIBS +=  Qt5QuickTemplates2            2.2 # 5.9

MULTI_PACKAGES =	-main -examples

WANTLIB += ${COMPILER_LIBCXX} GL Qt5Core Qt5Gui Qt5Network Qt5Qml
WANTLIB += Qt5QmlModels Qt5Quick Qt5Widgets m

LIB_DEPENDS =	x11/qt5/qtdeclarative>=${QT5_VERSION},<${QT5_NEXT_VERSION}

FLAVORS =		debug

MODQMAKE_RECURSIVE =	No

pre-configure:
	${QT5_GEN_INCLUDES}

.include <bsd.port.mk>
