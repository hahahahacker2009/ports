COMMENT =	archiving Tool
DISTNAME =	ark-${VERSION}
CATEGORIES =	archivers

SHARED_LIBS +=  kerfuffle                 9.1 # 17.08

WANTLIB += ${COMPILER_LIBCXX} KF5Auth KF5AuthCore KF5Bookmarks
WANTLIB += KF5Codecs KF5Completion KF5ConfigCore KF5ConfigGui
WANTLIB += KF5ConfigWidgets KF5CoreAddons KF5Crash KF5DBusAddons
WANTLIB += KF5I18n KF5IconThemes KF5ItemViews KF5JobWidgets KF5KIOCore
WANTLIB += KF5KIOFileWidgets KF5KIOGui KF5KIOWidgets KF5Parts
WANTLIB += KF5Pty KF5Service KF5Solid KF5SonnetUi KF5TextWidgets
WANTLIB += KF5WidgetsAddons KF5WindowSystem KF5XmlGui Qt5Concurrent
WANTLIB += Qt5Core Qt5DBus Qt5Gui Qt5Network Qt5Widgets Qt5Xml
WANTLIB += X11 archive c m z zip

WANTLIB += lib/inotify/inotify

MODKDE5_DESKTOP_FILE = yes
MODKDE5_ICON_CACHE = yes
MODKDE5_TRANSLATIONS = yes
MODKF5_L10N_CONFLICT = yes
MODKDE5_DOCS = yes

BUILD_DEPENDS =	archivers/bzip2 \
		archivers/lzo2 \
		archivers/p7zip \
		archivers/rzip \
		archivers/unrar \
		archivers/zstd

RUN_DEPENDS =	archivers/bzip2 \
		archivers/unrar \
		archivers/p7zip \
		archivers/lzo2 \
		archivers/rzip \
		archivers/zstd \
		misc/shared-mime-info

LIB_DEPENDS =	archivers/libarchive \
		archivers/libzip \
		devel/kf5/kauth \
		devel/kf5/kbookmarks \
		devel/kf5/kcodecs \
		devel/kf5/kcompletion \
		devel/kf5/kconfig \
		devel/kf5/kconfigwidgets \
		devel/kf5/kcoreaddons \
		devel/kf5/kcrash \
		devel/kf5/kdbusaddons \
		devel/kf5/ki18n \
		devel/kf5/kio \
		devel/kf5/kitemviews \
		devel/kf5/kjobwidgets \
		devel/kf5/kparts \
		devel/kf5/kpty \
		devel/kf5/kservice \
		devel/kf5/ktextwidgets \
		devel/kf5/kwidgetsaddons \
		devel/kf5/solid \
		devel/kf5/sonnet \
		devel/libinotify

# for tests
PORTHOME =	${WRKDIR}

TEST_IS_INTERACTIVE =	X11

.include <bsd.port.mk>
