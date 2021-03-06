# -*- mode: python; coding: utf-8 -*-

# Mixin to provide plots for TCP socket stats data series

PLOTS['tcp_cwnd'] = {'description': 'TCP window statistics',
                     'type': 'timeseries',
                     'axis_labels': ['Packets'],
                     'series': [
                         {'data': glob('TCP**', exclude=['*fairness*']),
                          'raw_key': 'tcp_cwnd',
                          'label': 'TCP window size'},
                     ]}
PLOTS['tcp_rtt'] = {'description': 'TCP RTT statistics',
                    'type': 'timeseries',
                    'axis_labels': ['Latency (ms)'],
                    'series': [
                        {'data': glob('TCP**', exclude=['*fairness*']),
                         'raw_key': 'tcp_rtt',
                         'label': 'RTT'},
                    ]}
PLOTS['tcp_rtt_cdf'] = {'description': 'TCP RTT statistics',
                        'type': 'cdf',
                        'axis_labels': ['Latency (ms)'],
                        'parent': 'tcp_rtt',
                        'cutoff': (DELAY,DELAY)}
PLOTS['tcp_pacing'] = {'description': 'TCP pacing rate statistics',
                    'type': 'timeseries',
                    'axis_labels': ['Mbps'],
                    'series': [
                        {'data': glob('TCP**', exclude=['*fairness*']),
                         'raw_key': 'tcp_pacing_rate',
                         'label': 'Pacing rate'},
                        {'data': glob('TCP**', exclude=['*fairness*']),
                         'raw_key': 'tcp_delivery_rate',
                         'label': 'Delivery rate'},
                        {'data': glob('TCP**', exclude=['*fairness*']),
                         'raw_key': 'tcp_bbr_bw',
                         'label': 'BBR BW'},
                    ]}
