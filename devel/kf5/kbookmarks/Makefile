COMMENT =		XBEL bookmarks format support for KDE
DISTNAME =		kbookmarks-${VERSION}

SHARED_LIBS =		KF5Bookmarks		6.0

BUILD_DEPENDS =		devel/gettext,-tools

WANTLIB += ${COMPILER_LIBCXX} KF5Auth KF5AuthCore KF5Codecs KF5ConfigCore
WANTLIB += KF5ConfigGui KF5ConfigWidgets KF5CoreAddons KF5WidgetsAddons
WANTLIB += KF5XmlGui Qt5Core Qt5DBus Qt5Gui Qt5Widgets Qt5Xml
WANTLIB += m

LIB_DEPENDS =		devel/kf5/kauth>=${MODKF5_VERSION} \
			devel/kf5/kcodecs>=${MODKF5_VERSION} \
			devel/kf5/kconfig>=${MODKF5_VERSION} \
			devel/kf5/kconfigwidgets>=${MODKF5_VERSION} \
			devel/kf5/kcoreaddons>=${MODKF5_VERSION} \
			devel/kf5/kwidgetsaddons>=${MODKF5_VERSION} \
			devel/kf5/kxmlgui>=${MODKF5_VERSION}

TEST_IS_INTERACTIVE =	X11
PORTHOME =		${WRKDIR}

.include <bsd.port.mk>
