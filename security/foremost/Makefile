COMMENT =		forensic data recovery program

DISTNAME =		foremost-1.5.7
REVISION =		4

CATEGORIES =		security

HOMEPAGE =		https://foremost.sourceforge.net/

# not copyrighted; see COPYRIGHT in main.h
PERMIT_PACKAGE =	Yes

SITES =			https://foremost.sourceforge.net/pkg/

WANTLIB +=		c

MAKE_FLAGS=		RAW_CC="${CC}" \
			CFLAGS="${CFLAGS}"
FAKE_FLAGS =		BIN=${WRKINST}${PREFIX}/bin \
					MAN=${WRKINST}${PREFIX}/man/man8 \
					CONF=${WRKINST}${PREFIX}/share/examples/ \
					MAN_PAGES=foremost.8

FIX_CRLF_FILES =	main.h

post-extract:
	cd ${WRKSRC} && gunzip foremost.8.gz

pre-configure:
	perl -pi -e 's,/usr/local/etc,${SYSCONFDIR},' ${WRKSRC}/config.c

NO_TEST =		Yes

.include <bsd.port.mk>
