#!/bin/bash

cd lines_data

wget -O bakerloo.json https://api.tfl.gov.uk/Line/bakerloo/Route/Sequence/outbound?excludeCrowding=True&app_id=&app_key=
wget -O central.json https://api.tfl.gov.uk/Line/central/Route/Sequence/outbound?excludeCrowding=True&app_id=&app_key=
wget -O circle.json https://api.tfl.gov.uk/Line/circle/Route/Sequence/outbound?excludeCrowding=True&app_id=&app_key=
wget -O district.json https://api.tfl.gov.uk/Line/district/Route/Sequence/outbound?excludeCrowding=True&app_id=&app_key=
wget -O hammersmith-city.json https://api.tfl.gov.uk/Line/hammersmith-city/Route/Sequence/outbound?excludeCrowding=True&app_id=&app_key=
wget -O jubilee.json https://api.tfl.gov.uk/Line/jubilee/Route/Sequence/outbound?excludeCrowding=True&app_id=&app_key=
wget -O metropolitan.json https://api.tfl.gov.uk/Line/metropolitan/Route/Sequence/outbound?excludeCrowding=True&app_id=&app_key=
wget -O northern.json https://api.tfl.gov.uk/Line/northern/Route/Sequence/outbound?excludeCrowding=True&app_id=&app_key=
wget -O piccadilly.json https://api.tfl.gov.uk/Line/piccadilly/Route/Sequence/outbound?excludeCrowding=True&app_id=&app_key=
wget -O victoria.json https://api.tfl.gov.uk/Line/victoria/Route/Sequence/outbound?excludeCrowding=True&app_id=&app_key=
wget -O waterloo-city.json https://api.tfl.gov.uk/Line/waterloo-city/Route/Sequence/outbound?excludeCrowding=True&app_id=&app_key=

echo Downloads complete
