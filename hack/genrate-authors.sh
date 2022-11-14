#!/usr/bin/env bash
# Script that generates authors.

set -e

cd "$(dirname "$(readlink -f "$BASH_SOURCE")")/.."

{
	cat <<- 'EOH'
		# These individuals contributed to the Maze Project in this \
repository

	EOH
	git log --format='%aN <%aE>' | LC_ALL=C.UTF-8 sort -uf
} > AUTHORS
