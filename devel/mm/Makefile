COMMENT=	shared memory lib for apps with pre-forked process model

DISTNAME=	mm-1.4.2
SHARED_LIBS +=	mm                   13.22    # 14.22

CATEGORIES=	devel
SITES=		https://distfiles.sigtrap.nl/ \
		ftp://ftp.ossp.org/pkg/lib/mm/

HOMEPAGE=	http://www.ossp.org/pkg/lib/mm/

# BSD
PERMIT_PACKAGE=	Yes

CONFIGURE_STYLE= gnu
CONFIGURE_ARGS+= --enable-static

TEST_TARGET=	test

.include <bsd.port.mk>
