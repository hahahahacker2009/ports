COMMENT =		load average history on a tty

DISTNAME =		ttyload-0.5.3
REVISION =		1

CATEGORIES =		sysutils

HOMEPAGE =		http://www.daveltd.com/src/util/ttyload/

# ISC
PERMIT_PACKAGE =	Yes

WANTLIB =		c

SITES =			http://www.daveltd.com/src/util/ttyload/
EXTRACT_SUFX =		.tar.bz2

MAKE_FLAGS =		ARCHLINKS_FREEBSD=arch/OpenBSD \
			CC="${CC}" \
			OTHER_FLAGS="-pedantic -Wall ${CFLAGS}"

NO_TEST =		Yes

ALL_TARGET =		default

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ttyload ${PREFIX}/bin/
	${INSTALL_MAN} ${WRKSRC}/ttyload.1 ${PREFIX}/man/man1/

.include <bsd.port.mk>
