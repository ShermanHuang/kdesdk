/*
    This file is part of the Okteta Kasten module, made within the KDE community.

    Copyright 2009 Friedrich W. H. Kossebau <kossebau@kde.org>

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) version 3, or any
    later version accepted by the membership of KDE e.V. (or its
    successor approved by the membership of KDE e.V.), which shall
    act as a proxy defined in Section 6 of version 3 of the license.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef BINARY8CODEC_H
#define BINARY8CODEC_H

// tool
#include "../abstracttypecodec.h"


namespace Okteta
{

class Binary8Codec : public AbstractTypeCodec
{
  public:
    Binary8Codec();

    virtual ~Binary8Codec();

  public: // AbstractTypeCodec API
    virtual QVariant value( const PODData& data, int* byteCount ) const;
    virtual QByteArray valueToBytes( const QVariant& value ) const;

    virtual bool areEqual( const QVariant& value, QVariant& otherValue ) const;

};

}

#endif
