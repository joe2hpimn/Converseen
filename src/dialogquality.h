/*
* This file is part of Converseen, an open-source batch image converter
* and resizer.
*
* (C) Francesco Mondello 2009 - 2025
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
* Contact e-mail: Francesco Mondello <faster3ck@gmail.com>
*
*/

#ifndef DIALOGQUALITY_H
#define DIALOGQUALITY_H

#include "ui_dialogquality.h"

class DialogQuality : public QDialog, private Ui::DialogQuality {
    Q_OBJECT
public:
    DialogQuality(QWidget *parent = 0);
    void setInitValues(int jpegVal, int pngVal, IMFilterType filter);

    void setIsWebPLosslessCompression(const bool &value);
    void setWebPCompression(const int &value);
    void setWebPQuality(const int &value);
    void setIskWebPDithering(const bool &value);
    void setIsRemoveMetadata(const bool &value);

    int getJpegQuality();
    int getPngQuality();

    bool isWebPLosslessCompression();
    int getWebPCompression();
    int getWebPQuality();
    bool iskWebPDithering();
    bool isRemoveMetadata();

    IMFilterType getResamplingFilter();

private slots:
    void setJpegSpin(int value);
    void setJpegSlider(int value);

    void setPngSpin(int value);
    void setPngSlider(int value);

    void setWebpCompressionSpin(int value);
    void setWebpCompressionSlider(int value);
    void setWebpQualitySpin(int value);
    void setWebpQualitySlider(int value);
};

#endif // DIALOGQUALITY_H
