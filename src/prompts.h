/*
 *  ZanDemo: Zandronum demo launcher
 *  Copyright (C) 2013 Santeri Piippo
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PROMPTS_H
#define PROMPTS_H

#include <QDialog>
#include "main.h"
#include "types.h"

class QAbstractButton;
class Ui_UnknownVersion;

class UnknownVersionPrompt : public QDialog {
	Q_OBJECT
	
public:
	explicit UnknownVersionPrompt (str fileName, str binaryName, bool isRelease,
		QWidget* parent = null, Qt::WindowFlags f = 0);
	virtual ~UnknownVersionPrompt();
	
public slots:
	void findBinary();
	void addBinary();
	
private:
	Ui_UnknownVersion* ui;
	QString m_binaryString;
	bool m_isRelease;
};

#endif // PROMPTS_H