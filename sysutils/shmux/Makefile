COMMENT=		execute a command on many hosts in parallel

DISTNAME=		shmux-1.0.3
CATEGORIES=		sysutils
HOMEPAGE=		http://web.taranis.org/shmux/
SITES=			${HOMEPAGE}dist/
EXTRACT_SUFX=		.tgz

# BSD
PERMIT_PACKAGE=	Yes

WANTLIB += c curses pcre

CONFIGURE_STYLE=	gnu
CONFIGURE_ENV=		CPPFLAGS="-I${LOCALBASE}/include" \
			LDFLAGS="-L${LOCALBASE}/lib"
CONFIGURE_ARGS=		--datarootdir=${PREFIX}/share/doc
LIB_DEPENDS=		devel/pcre
RUN_DEPENDS=		net/fping

ALL_TARGET=
TEST_TARGET=		test

.include <bsd.port.mk>
