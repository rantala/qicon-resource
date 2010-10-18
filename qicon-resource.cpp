/* Copyright (C) 2010 Tommi Rantala <tt.rantala@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <QApplication>
#include <QDialogButtonBox>
#include <QPushButton>

int main(int argc, char** argv)
{
	QApplication app(argc, argv);
	QDialogButtonBox box(Qt::Vertical);
	QPushButton btn1(QIcon(":/qicon-resource.png"), "QIcon(\":/qicon-resource.png\")");
	QPushButton btn2(QIcon(":/qicon-resource"),     "QIcon(\":/qicon-resource\")");
	box.addButton(&btn1, QDialogButtonBox::YesRole);
	box.addButton(&btn2, QDialogButtonBox::NoRole);
	box.show();
	app.exec();
}
