// { dg-options "-std=gnu++11" }
// { dg-additional-options "-static-libstdc++" { target *-*-mingw* } }

// Copyright (C) 2008-2015 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

#include <system_error>
#include <testsuite_hooks.h>

// unspecified bool operator positive tests
void test01()
{
  bool test __attribute__((unused)) = true;

  // 1
  std::error_condition e1;
  if (static_cast<bool>(e1))
    {
      VERIFY( false );
    }

  // 2
  std::error_condition e2(std::errc::operation_not_supported);
  if (static_cast<bool>(e2))
    {
      VERIFY( true );
    }
}

int main()
{
  test01();
  return 0;
}