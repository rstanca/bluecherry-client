#
# Copyright 2010-2016 Bluecherry
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License as
# published by the Free Software Foundation; either version 2 of
# the License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program. If not, see <http://www.gnu.org/licenses/>.
#


find_package (LibMPV  REQUIRED)


include_directories (${LIBMPV_INCLUDE_DIRS})

link_directories (${LIBAVCODEC_LIBRARY_DIRS})

list (APPEND bluecherry_client_LIBRARIES
	${LIBMPV_LIBRARIES}
)


