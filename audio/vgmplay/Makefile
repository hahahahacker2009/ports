COMMENT =	command line audio player for VGM files
REVISION =	0
CATEGORIES =	audio

GH_ACCOUNT =	vgmrips
GH_PROJECT =	vgmplay
GH_TAGNAME =	0.40.9

HOMEPAGE =	https://vgmrips.net/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv2 only
PERMIT_PACKAGE =	Yes

WANTLIB += ao c m pthread z

LIB_DEPENDS =	audio/libao

USE_GMAKE =	Yes
MAKE_FLAGS =	CC="${CC}"

FAKE_FLAGS =	DESTDIR=

NO_TEST =	Yes

WRKSRC =	${WRKDIST}/VGMPlay

.include <bsd.port.mk>
