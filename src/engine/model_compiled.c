
#include "model_compiled.h"

;


size_t get_num_class(void) {
  return 1;
}

size_t get_num_feature(void) {
  return 6;
}

const char* get_pred_transform(void) {
  return "identity";
}

float get_sigmoid_alpha(void) {
  return 1.0;
}

float get_ratio_c(void) {
  return 1.0;
}

float get_global_bias(void) {
  return 0.0;
}

const char* get_threshold_type(void) {
  return "float64";
}

const char* get_leaf_output_type(void) {
  return "float64";
}


static inline double pred_transform(double margin) {
  return margin;
}
double predict(union Entry* data, int pred_margin) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-201.9999999999999716) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9934955000000000869) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)81.50000000000001421) ) ) {
          sum += (double)8.475434907389681527;
        } else {
          sum += (double)11.87589878105784003;
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-217.9999999999999716) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5221.999999999999091) ) ) {
            sum += (double)10.50435772514598654;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2389.999999999999545) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)58.50000000000000711) ) ) {
                sum += (double)9.072625606457505043;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00807545500000000048) ) ) {
                  sum += (double)9.034158043817468453;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009289325000000002788) ) ) {
                    sum += (double)4.014565353461848396;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2853.999999999999545) ) ) {
                      sum += (double)8.08217392444243643;
                    } else {
                      sum += (double)4.903005801582636991;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03289050000000001001) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02203880000000000075) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01922215000000000382) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)659.5000000000001137) ) ) {
                      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)466.5000000000000568) ) ) {
                        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)172.5000000000000284) ) ) {
                          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)156.5000000000000284) ) ) {
                            sum += (double)7.918807083937331015;
                          } else {
                            sum += (double)5.74761501168100164;
                          }
                        } else {
                          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1537.999999999999773) ) ) {
                            sum += (double)10.78910854677087627;
                          } else {
                            sum += (double)8.402131087072888249;
                          }
                        }
                      } else {
                        sum += (double)5.860686712406643295;
                      }
                    } else {
                      sum += (double)11.43417037515178691;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)466.5000000000000568) ) ) {
                      sum += (double)7.093593815264703117;
                    } else {
                      sum += (double)3.532706917543861902;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02442820000000000408) ) ) {
                    sum += (double)12.53608497034166191;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)75.50000000000001421) ) ) {
                      sum += (double)5.665313016053508122;
                    } else {
                      sum += (double)9.93625064059315477;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)154.5000000000000284) ) ) {
                  sum += (double)8.224880726704244083;
                } else {
                  sum += (double)4.936700525267479378;
                }
              }
            }
          }
        } else {
          sum += (double)4.518898624459382063;
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00876145500000000306) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)341.5000000000000568) ) ) {
          sum += (double)7.969970300512085437;
        } else {
          sum += (double)4.073712963692408984;
        }
      } else {
        sum += (double)9.344318011496158149;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009689465000000003006) ) ) {
        sum += (double)-0.05710557923521001472;
      } else {
        sum += (double)-0.01659461210717740748;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1402.000000000000227) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1881085000000000396) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02071160000000000362) ) ) {
            sum += (double)6.775370401738226356;
          } else {
            sum += (double)10.72164145238430599;
          }
        } else {
          sum += (double)4.106700591838661651;
        }
      } else {
        sum += (double)0.03051035874933940087;
      }
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-201.9999999999999716) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9934955000000000869) ) ) {
        sum += (double)9.34383919000625518;
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-217.9999999999999716) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5221.999999999999091) ) ) {
            sum += (double)9.979139088221959497;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2085.999999999999545) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04695285000000001124) ) ) {
                sum += (double)6.135506833718747721;
              } else {
                sum += (double)9.821004102230071808;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03289050000000001001) ) ) {
                sum += (double)7.5834273252765243;
              } else {
                sum += (double)5.984380467896609268;
              }
            }
          }
        } else {
          sum += (double)4.292953334031281543;
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00876145500000000306) ) ) {
        sum += (double)7.038889360599380751;
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1690.000000000000227) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)846.0000000000001137) ) ) {
            sum += (double)8.673231444107859289;
          } else {
            sum += (double)11.5408302338396922;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2826.000000000000455) ) ) {
            sum += (double)4.852251152370286924;
          } else {
            sum += (double)9.236843163626534903;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02203880000000000075) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009493430000000002353) ) ) {
            sum += (double)-5.555966358699381047;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-205.9999999999999716) ) ) {
              sum += (double)-5.228597187953352154;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01012445000000000185) ) ) {
                sum += (double)-5.338155401702043612;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)870.0000000000001137) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)702.0000000000001137) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)438.0000000000000568) ) ) {
                      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)102.0000000000000142) ) ) {
                        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01781075000000000366) ) ) {
                          sum += (double)-4.554892382113695959;
                        } else {
                          sum += (double)-2.831664688889306003;
                        }
                      } else {
                        sum += (double)-3.298318549357176721;
                      }
                    } else {
                      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01280645000000000221) ) ) {
                        sum += (double)-6.908222970896277459;
                      } else {
                        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0172195500000000036) ) ) {
                          sum += (double)-3.3306499818078521;
                        } else {
                          sum += (double)-6.793112267156203643;
                        }
                      }
                    }
                  } else {
                    sum += (double)-2.067989717194242072;
                  }
                } else {
                  sum += (double)-5.184439633643004974;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06777680000000001204) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1689.999999999999773) ) ) {
              sum += (double)-5.891045230687402601;
            } else {
              sum += (double)-2.88422564192399955;
            }
          } else {
            if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-117.9999999999999858) ) ) {
                sum += (double)-7.890540436073206543;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)498.0000000000000568) ) ) {
                  sum += (double)-3.403134535768601587;
                } else {
                  sum += (double)-0.2255994353163987276;
                }
              }
            } else {
              sum += (double)-0.6518168624421581958;
            }
          }
        }
      } else {
        sum += (double)7.976757705062627934;
      }
    } else {
      sum += (double)0.001126794498253784775;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-201.9999999999999716) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9934955000000000869) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)81.50000000000001421) ) ) {
          sum += (double)7.584470653533935902;
        } else {
          sum += (double)10.8149111986160289;
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-217.9999999999999716) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5221.999999999999091) ) ) {
            sum += (double)9.480182625906808269;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2085.999999999999545) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)34.50000000000000711) ) ) {
                sum += (double)9.498281681060792181;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00807545500000000048) ) ) {
                  sum += (double)7.642726399784996794;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008826590000000002212) ) ) {
                    sum += (double)2.964328158207429009;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3197.999999999999545) ) ) {
                      sum += (double)7.70956501620156498;
                    } else {
                      sum += (double)5.271591405787019902;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04467245000000000937) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)17.50000000000000355) ) ) {
                  sum += (double)3.757736442202613603;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)40.50000000000000711) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-389.9999999999999432) ) ) {
                      sum += (double)7.730773279560146705;
                    } else {
                      sum += (double)11.40736573457717995;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.006115895000000000532) ) ) {
                      sum += (double)10.18319117909386051;
                    } else {
                      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)84.50000000000001421) ) ) {
                        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01340995000000000208) ) ) {
                          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01245045000000000179) ) ) {
                            sum += (double)6.453305817710028869;
                          } else {
                            sum += (double)3.745680014292398941;
                          }
                        } else {
                          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01527095000000000188) ) ) {
                            sum += (double)11.65735097858640934;
                          } else {
                            sum += (double)6.443713762943561463;
                          }
                        }
                      } else {
                        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1689.999999999999773) ) ) {
                          sum += (double)8.86061586566355075;
                        } else {
                          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008557765000000001898) ) ) {
                            sum += (double)6.368498464547671212;
                          } else {
                            sum += (double)7.50221199954153839;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05140305000000000568) ) ) {
                  sum += (double)2.829880025386810161;
                } else {
                  sum += (double)6.553524939715862807;
                }
              }
            }
          }
        } else {
          sum += (double)4.078305421052156099;
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00876145500000000306) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)194.5000000000000284) ) ) {
          sum += (double)7.512458577156067463;
        } else {
          sum += (double)4.570243067619128574;
        }
      } else {
        sum += (double)8.433246598981090969;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009689465000000003006) ) ) {
        sum += (double)-0.05143245778990950673;
      } else {
        sum += (double)-0.01499542191428635679;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1402.000000000000227) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1881085000000000396) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02071160000000000362) ) ) {
            sum += (double)6.077641527652740905;
          } else {
            sum += (double)9.786721160195090974;
          }
        } else {
          sum += (double)3.622161540389061241;
        }
      } else {
        sum += (double)0.02445736391304871235;
      }
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-201.9999999999999716) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9934955000000000869) ) ) {
        sum += (double)8.432814495563507151;
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-217.9999999999999716) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5221.999999999999091) ) ) {
            sum += (double)9.006173052106586141;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3633.999999999999545) ) ) {
              sum += (double)4.662845305738778201;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)466.5000000000000568) ) ) {
                sum += (double)6.787422481133678076;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)863.5000000000001137) ) ) {
                  sum += (double)4.807894557288715731;
                } else {
                  sum += (double)8.407658785360830223;
                }
              }
            }
          }
        } else {
          sum += (double)3.874390079357005856;
        }
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1690.000000000000227) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)870.0000000000001137) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-197.9999999999999716) ) ) {
            sum += (double)10.55705888582312646;
          } else {
            sum += (double)7.381022270670476892;
          }
        } else {
          sum += (double)9.701857569343166787;
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2426.000000000000455) ) ) {
          sum += (double)2.968128259181976425;
        } else {
          sum += (double)7.441635213579449903;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)194.5000000000000284) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-277.9999999999999432) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)65.50000000000001421) ) ) {
              if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
                sum += (double)-8.297085588734324446;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)26.50000000000000355) ) ) {
                  sum += (double)-4.062289172808330129;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)40.50000000000000711) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-409.9999999999999432) ) ) {
                      sum += (double)-6.155069039265314679;
                    } else {
                      sum += (double)-10.70805428945101312;
                    }
                  } else {
                    sum += (double)-5.871878576709290698;
                  }
                }
              }
            } else {
              sum += (double)-4.875392960033872569;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)4506.000000000000909) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)18.50000000000000355) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)12.50000000000000178) ) ) {
                  sum += (double)-5.414323072364697786;
                } else {
                  sum += (double)-9.620317012790977174;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1198.000000000000227) ) ) {
                  sum += (double)-4.345349443788661503;
                } else {
                  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
                    sum += (double)-0.5239535000013268995;
                  } else {
                    sum += (double)-6.219201544095884771;
                  }
                }
              }
            } else {
              sum += (double)-1.085354534685611716;
            }
          }
        } else {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-485.9999999999999432) ) ) {
              sum += (double)-4.350547858755638764;
            } else {
              sum += (double)-1.299436518415808761;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3633.999999999999545) ) ) {
              sum += (double)-0.6866339097802456326;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2034.000000000000227) ) ) {
                sum += (double)-3.477193316483894403;
              } else {
                sum += (double)-1.281878541753842526;
              }
            }
          }
        }
      } else {
        sum += (double)7.232782670429775074;
      }
    } else {
      sum += (double)0.00208720772371918115;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)202.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008696525000000001823) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3633.999999999999545) ) ) {
          sum += (double)2.85968398694638859;
        } else {
          sum += (double)6.083914731814876298;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01517625000000000224) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01388095000000000127) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0132556500000000025) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9683375000000000732) ) ) {
                sum += (double)9.300273870538783072;
              } else {
                sum += (double)6.6975216335406067;
              }
            } else {
              sum += (double)4.497201400143759464;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01472905000000000221) ) ) {
              sum += (double)10.69172770678997075;
            } else {
              sum += (double)7.117604385722767546;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01545895000000000082) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1049.999999999999773) ) ) {
              sum += (double)1.277329599289667161;
            } else {
              sum += (double)6.293742783864339607;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3197.999999999999545) ) ) {
              sum += (double)8.196656274795532937;
            } else {
              sum += (double)6.189496398051316461;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1690.000000000000227) ) ) {
        sum += (double)8.137723183137252292;
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2426.000000000000455) ) ) {
          sum += (double)2.819721903800964213;
        } else {
          sum += (double)7.069553456987653028;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02203880000000000075) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008627505000000002325) ) ) {
            sum += (double)-5.262637185901236414;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-305.9999999999999432) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-321.9999999999999432) ) ) {
                sum += (double)-4.752663037605787899;
              } else {
                sum += (double)-7.804677055432247101;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01310225000000000105) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)306.0000000000000568) ) ) {
                  sum += (double)-4.130366363906672333;
                } else {
                  sum += (double)-4.942827491393456008;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-289.9999999999999432) ) ) {
                  sum += (double)-5.603946396416309206;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)902.0000000000001137) ) ) {
                    sum += (double)-3.345596447552359631;
                  } else {
                    sum += (double)-4.606145396851402118;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06777680000000001204) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1689.999999999999773) ) ) {
              sum += (double)-5.36817295074462919;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1350.000000000000227) ) ) {
                sum += (double)-2.449149826446245015;
              } else {
                sum += (double)-5.007513472863606374;
              }
            }
          } else {
            if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-117.9999999999999858) ) ) {
                sum += (double)-7.128084846643301553;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)498.0000000000000568) ) ) {
                  sum += (double)-3.069910183974675189;
                } else {
                  sum += (double)-0.1514630258083343728;
                }
              }
            } else {
              sum += (double)-0.4616264992713928206;
            }
          }
        }
      } else {
        sum += (double)6.871143856048584908;
      }
    } else {
      sum += (double)0.001982847350885794634;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01936015000000000305) ) ) {
      sum += (double)-7.516313728296532659;
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1085.999999999999773) ) ) {
        sum += (double)-6.892656766176223471;
      } else {
        sum += (double)-1.660183451053322656;
      }
    }
  } else {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-637.9999999999998863) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)54.50000000000000711) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)18.50000000000000355) ) ) {
            sum += (double)0.9099633165027785076;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08740230000000001609) ) ) {
              sum += (double)4.732595472875630982;
            } else {
              sum += (double)9.342670428234598035;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07886890000000000567) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-713.9999999999998863) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)407.5000000000000568) ) ) {
                sum += (double)3.153555504947861188;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02557070000000000523) ) ) {
                  sum += (double)0.7051380296232839795;
                } else {
                  sum += (double)6.282065596119050355;
                }
              }
            } else {
              sum += (double)1.226693558377841553;
            }
          } else {
            sum += (double)-0.1816682580598565355;
          }
        }
      } else {
        sum += (double)0.001944921717703656117;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-401.9999999999999432) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)452.5000000000000568) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)59.50000000000000711) ) ) {
              sum += (double)1.549323526648588079;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03957025000000000819) ) ) {
                sum += (double)-0.3387199062506358049;
              } else {
                sum += (double)3.661497691825584155;
              }
            }
          } else {
            sum += (double)2.890803755124410124;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0260519500000000008) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-137.9999999999999716) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)289.5000000000000568) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-197.9999999999999716) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9785525000000000473) ) ) {
                    sum += (double)2.087523511250814146;
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-221.9999999999999716) ) ) {
                      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-289.9999999999999432) ) ) {
                        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01413270000000000151) ) ) {
                          sum += (double)-1.469000401845792503;
                        } else {
                          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-321.9999999999999432) ) ) {
                            sum += (double)-2.21475009088930852;
                          } else {
                            sum += (double)-6.427193004944744992;
                          }
                        }
                      } else {
                        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008412265000000000367) ) ) {
                          sum += (double)-3.498024773597717463;
                        } else {
                          sum += (double)1.431649226340178105;
                        }
                      }
                    } else {
                      sum += (double)-2.990508948492281771;
                    }
                  }
                } else {
                  sum += (double)0.08294968988703585455;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-305.9999999999999432) ) ) {
                  sum += (double)2.71480200237698055;
                } else {
                  sum += (double)-0.7411090328818873418;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007467930000000001095) ) ) {
                sum += (double)-4.453086488975023016;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-97.99999999999998579) ) ) {
                  sum += (double)-3.253280152583050366;
                } else {
                  sum += (double)-1.897839104448811431;
                }
              }
            }
          } else {
            sum += (double)-0.1489591163309181565;
          }
        }
      } else {
        sum += (double)0.001871810846888146643;
      }
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-429.9999999999999432) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5221.999999999999091) ) ) {
        sum += (double)8.475290169254426687;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)493.5000000000000568) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)172.5000000000000284) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)54.50000000000000711) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)16.50000000000000355) ) ) {
                sum += (double)3.471325080625472737;
              } else {
                sum += (double)6.649700712121052071;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)83.50000000000001421) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3197.999999999999545) ) ) {
                  sum += (double)8.381845188140870206;
                } else {
                  sum += (double)4.776604456572330903;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3197.999999999999545) ) ) {
                  sum += (double)1.694164003644670791;
                } else {
                  sum += (double)6.059884680354077346;
                }
              }
            }
          } else {
            sum += (double)6.812596441351849386;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)535.5000000000001137) ) ) {
            sum += (double)1.017132504781087299;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)863.5000000000001137) ) ) {
              sum += (double)4.712005883768985548;
            } else {
              sum += (double)8.027270524398140594;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)192.5000000000000284) ) ) {
        sum += (double)7.045644300519623648;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)223.5000000000000284) ) ) {
          sum += (double)2.642042727586700224;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)966.5000000000001137) ) ) {
            sum += (double)6.832479723294575535;
          } else {
            sum += (double)3.698849708557129023;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)194.5000000000000284) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-501.9999999999999432) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)59.50000000000000711) ) ) {
              sum += (double)-6.563342123484090074;
            } else {
              sum += (double)-4.375080686452096579;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)4506.000000000000909) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)50.50000000000000711) ) ) {
                sum += (double)-4.505419717499676402;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)52.50000000000000711) ) ) {
                  sum += (double)-2.073449065080329667;
                } else {
                  sum += (double)-3.884397896853360788;
                }
              }
            } else {
              sum += (double)-0.9137804977821581964;
            }
          }
        } else {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-389.9999999999999432) ) ) {
              sum += (double)-3.186761690889086118;
            } else {
              sum += (double)-0.8669164207700181812;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3633.999999999999545) ) ) {
              sum += (double)-0.5397609399424658783;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13.99999999999999822) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-97.99999999999998579) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-897.9999999999998863) ) ) {
                    sum += (double)-2.547340896855230241;
                  } else {
                    sum += (double)-3.718827846873667298;
                  }
                } else {
                  sum += (double)-6.700455738947941775;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)3474.000000000000455) ) ) {
                  sum += (double)-2.673739555529559997;
                } else {
                  sum += (double)-0.2622743996178231729;
                }
              }
            }
          }
        }
      } else {
        sum += (double)6.418315728505452178;
      }
    } else {
      sum += (double)0.001789208626591970181;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008627505000000002325) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3633.999999999999545) ) ) {
        sum += (double)1.119936361312866335;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)466.5000000000000568) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)112.5000000000000142) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)106.5000000000000142) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-469.9999999999999432) ) ) {
                sum += (double)4.456404225180082612;
              } else {
                sum += (double)6.707367988868888631;
              }
            } else {
              sum += (double)0.5631990280151367712;
            }
          } else {
            sum += (double)5.929241815652814829;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)535.5000000000001137) ) ) {
            sum += (double)1.055702190399170126;
          } else {
            sum += (double)5.822493971311129002;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03382110000000001365) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)438.0000000000000568) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)52.50000000000000711) ) ) {
            sum += (double)6.920032670058512636;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)83.50000000000001421) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-277.9999999999999432) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01162965000000000179) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009179275000000002363) ) ) {
                    sum += (double)6.924587272875237787;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)58.50000000000000711) ) ) {
                      sum += (double)7.065246252580123176;
                    } else {
                      sum += (double)3.179744869083553027;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01245045000000000179) ) ) {
                    sum += (double)8.267777494283823359;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01340995000000000208) ) ) {
                      sum += (double)2.376676848626905869;
                    } else {
                      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01537025000000000197) ) ) {
                        sum += (double)9.442731110254923621;
                      } else {
                        sum += (double)4.922166206962184098;
                      }
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01421345000000000074) ) ) {
                  sum += (double)7.795299259308845485;
                } else {
                  sum += (double)4.241006587982178111;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02203880000000000075) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)440.5000000000000568) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)269.5000000000000568) ) ) {
                    sum += (double)6.037910489702558614;
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-565.9999999999998863) ) ) {
                      sum += (double)7.150412386939639653;
                    } else {
                      sum += (double)10.27210136212800684;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01922215000000000382) ) ) {
                    sum += (double)6.165864805741744448;
                  } else {
                    sum += (double)0.6316034387659144045;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02733575000000000241) ) ) {
                  sum += (double)10.0646332528856064;
                } else {
                  sum += (double)5.735945468478732323;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1690.000000000000227) ) ) {
            sum += (double)8.469555079495465932;
          } else {
            sum += (double)5.457949499650435854;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04695285000000001124) ) ) {
          sum += (double)3.277546915847263875;
        } else {
          sum += (double)5.784689952550309933;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
      sum += (double)-0.01567713567304677633;
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1454.000000000000227) ) ) {
        sum += (double)5.801258982838811029;
      } else {
        sum += (double)0.01188309530729716318;
      }
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-429.9999999999999432) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5221.999999999999091) ) ) {
        sum += (double)7.767496299743652521;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)493.5000000000000568) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)172.5000000000000284) ) ) {
            sum += (double)5.100358876843138489;
          } else {
            sum += (double)6.169100186282107323;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)535.5000000000001137) ) ) {
            sum += (double)0.8529169612460667516;
          } else {
            sum += (double)4.963171752775558332;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)192.5000000000000284) ) ) {
        sum += (double)6.363583017901007111;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)223.5000000000000284) ) ) {
          sum += (double)2.243164290451422183;
        } else {
          sum += (double)5.787754036107829236;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)194.5000000000000284) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-501.9999999999999432) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)59.50000000000000711) ) ) {
              sum += (double)-6.234391163039381567;
            } else {
              sum += (double)-4.155542749271059044;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)4506.000000000000909) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)50.50000000000000711) ) ) {
                sum += (double)-4.27936488385009195;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)101.5000000000000142) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)954.0000000000001137) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)54.50000000000000711) ) ) {
                      sum += (double)-1.982494845757117652;
                    } else {
                      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)85.50000000000001421) ) ) {
                        sum += (double)-3.642164335077233694;
                      } else {
                        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)88.50000000000001421) ) ) {
                          sum += (double)-0.9671556654843418421;
                        } else {
                          sum += (double)-2.966520576185534885;
                        }
                      }
                    }
                  } else {
                    sum += (double)-5.092275473049709511;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)122.5000000000000142) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)718.0000000000001137) ) ) {
                      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)119.5000000000000142) ) ) {
                        sum += (double)-4.936879629607594744;
                      } else {
                        sum += (double)-8.680293366568429647;
                      }
                    } else {
                      sum += (double)-2.075740474462509422;
                    }
                  } else {
                    sum += (double)-3.521607602437337281;
                  }
                }
              }
            } else {
              sum += (double)-0.8673076333421649853;
            }
          }
        } else {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-389.9999999999999432) ) ) {
              sum += (double)-3.026639766352517302;
            } else {
              sum += (double)-0.8227867294664252817;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3633.999999999999545) ) ) {
              sum += (double)-0.5119890429355480332;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13.99999999999999822) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-97.99999999999998579) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)810.5000000000001137) ) ) {
                    sum += (double)-3.089020134808537321;
                  } else {
                    sum += (double)-5.220328670878743083;
                  }
                } else {
                  sum += (double)-6.364649029878470365;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)3474.000000000000455) ) ) {
                  sum += (double)-2.539268682964929802;
                } else {
                  sum += (double)-0.2483768140397420998;
                }
              }
            }
          }
        }
      } else {
        sum += (double)5.827439016766018831;
      }
    } else {
      sum += (double)0.002481137810830195967;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008627505000000002325) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)507.5000000000000568) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008557765000000001898) ) ) {
          sum += (double)4.854850255831694383;
        } else {
          sum += (double)2.290283481494800544;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)535.5000000000001137) ) ) {
          sum += (double)-0.8952267265319824308;
        } else {
          sum += (double)5.276867763812725265;
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03289050000000001001) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)52.50000000000000711) ) ) {
          sum += (double)6.414045903899453727;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)80.50000000000001421) ) ) {
            sum += (double)4.757501117644771682;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02203880000000000075) ) ) {
              sum += (double)5.639459923638238337;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02733575000000000241) ) ) {
                sum += (double)9.335191510853015018;
              } else {
                sum += (double)5.721227989196777663;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)315.5000000000000568) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)124.5000000000000142) ) ) {
            sum += (double)4.53511063565490069;
          } else {
            sum += (double)0.7629776409694126738;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)659.5000000000001137) ) ) {
            sum += (double)8.683013083718039482;
          } else {
            sum += (double)3.929949152469635276;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0260519500000000008) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007864580000000001223) ) ) {
            sum += (double)-4.822543324922261121;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)535.5000000000001137) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007976505000000001788) ) ) {
                sum += (double)-1.484997016906738354;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008557765000000001898) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)139.5000000000000284) ) ) {
                    sum += (double)-3.981508114614200178;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00825941000000000175) ) ) {
                      sum += (double)-3.933856528304343847;
                    } else {
                      sum += (double)-7.503343686190518724;
                    }
                  }
                } else {
                  sum += (double)-3.638325766059077537;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)863.5000000000001137) ) ) {
                sum += (double)-1.332107099890708968;
              } else {
                sum += (double)-3.993155988814339086;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)71.50000000000001421) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.348122000000000098) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02819210000000000119) ) ) {
                sum += (double)-1.082604351043701341;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)18.50000000000000355) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07886890000000000567) ) ) {
                    sum += (double)-6.473638830184936133;
                  } else {
                    sum += (double)-2.391430640220642001;
                  }
                } else {
                  sum += (double)-6.60646478163229478;
                }
              }
            } else {
              sum += (double)0.1376917130417294188;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)428.5000000000000568) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04108815000000001078) ) ) {
                sum += (double)-1.352992460798861485;
              } else {
                sum += (double)-0.09072936364867228987;
              }
            } else {
              sum += (double)-2.244630807592668642;
            }
          }
        }
      } else {
        sum += (double)5.536067061954074831;
      }
    } else {
      sum += (double)0.002357080966047563671;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1421.500000000000227) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009394535000000000732) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009069620000000002194) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008889115000000001252) ) ) {
            sum += (double)4.787529766092113448;
          } else {
            sum += (double)7.281167875017438007;
          }
        } else {
          sum += (double)3.478579721510785205;
        }
      } else {
        sum += (double)5.385510603745514047;
      }
    } else {
      sum += (double)1.252186566307431193;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02509105000000000363) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)564.5000000000001137) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008557765000000001898) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)158.5000000000000284) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007102530000000000995) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)77.50000000000001421) ) ) {
                    sum += (double)-6.163857301505836439;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)98.50000000000001421) ) ) {
                      sum += (double)-0.5655787706375122736;
                    } else {
                      sum += (double)-5.127733690473768924;
                    }
                  }
                } else {
                  sum += (double)-3.520619343242606281;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00825941000000000175) ) ) {
                  sum += (double)-4.633046147131151038;
                } else {
                  sum += (double)-8.009020239241580796;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)50.50000000000000711) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008889115000000001252) ) ) {
                  sum += (double)-1.338875321780934158;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9932835000000000969) ) ) {
                    sum += (double)-1.042085903341120057;
                  } else {
                    sum += (double)-4.569244119298388362;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01094635000000000226) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)372.5000000000000568) ) ) {
                    sum += (double)-3.57205666781646336;
                  } else {
                    sum += (double)-6.226187844546336336;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)128.5000000000000284) ) ) {
                    sum += (double)-3.629202397211873432;
                  } else {
                    sum += (double)-2.594314992187807256;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)863.5000000000001137) ) ) {
              sum += (double)-1.371988348250693601;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1244.500000000000227) ) ) {
                sum += (double)-4.81628546184963735;
              } else {
                sum += (double)-1.388177651625413178;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)110.5000000000000142) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.348122000000000098) ) ) {
              if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
                sum += (double)-6.277868658474513808;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03126565000000001288) ) ) {
                  sum += (double)-1.205020533463893706;
                } else {
                  sum += (double)-3.943564611292900146;
                }
              }
            } else {
              sum += (double)0.01796394030253092508;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)428.5000000000000568) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04108815000000001078) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03957025000000000819) ) ) {
                  sum += (double)-0.9578398805303672825;
                } else {
                  sum += (double)-4.969275917325701286;
                }
              } else {
                sum += (double)-0.04766935644707639974;
              }
            } else {
              sum += (double)-2.939600321671058225;
            }
          }
        }
      } else {
        sum += (double)5.007862622224831917;
      }
    } else {
      sum += (double)0.00223819879146224714;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1421.500000000000227) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-429.9999999999999432) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)110.5000000000000142) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)54.50000000000000711) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00825941000000000175) ) ) {
              sum += (double)3.190898079168601242;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01614810000000000204) ) ) {
                sum += (double)6.523215620858329622;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01966205000000000383) ) ) {
                  sum += (double)2.455471110343933283;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)18.50000000000000355) ) ) {
                    sum += (double)2.721073577517555186;
                  } else {
                    sum += (double)6.318521701588350581;
                  }
                }
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-497.9999999999999432) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007102530000000000995) ) ) {
                sum += (double)6.231505301059820923;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007467930000000001095) ) ) {
                  sum += (double)1.273110382897513437;
                } else {
                  sum += (double)4.099709826787313105;
                }
              }
            } else {
              sum += (double)1.860303204234053487;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03382110000000001365) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009339625000000002439) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2853.999999999999545) ) ) {
                sum += (double)1.57087501949734154;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009069620000000002194) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1689.999999999999773) ) ) {
                    sum += (double)7.547867105445082991;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1417.999999999999773) ) ) {
                      sum += (double)2.863588873545328983;
                    } else {
                      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-597.9999999999998863) ) ) {
                        sum += (double)5.750134537910503774;
                      } else {
                        sum += (double)2.95543610357469122;
                      }
                    }
                  }
                } else {
                  sum += (double)2.052503192424774081;
                }
              }
            } else {
              sum += (double)5.672782703231493251;
            }
          } else {
            sum += (double)3.211188727734135995;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009738155000000000075) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)105.5000000000000142) ) ) {
            sum += (double)5.967290061314868943;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)121.5000000000000142) ) ) {
              sum += (double)-0.0472188949584960993;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)150.5000000000000284) ) ) {
                sum += (double)6.897011518478393555;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008889115000000001252) ) ) {
                  sum += (double)2.397984673705282344;
                } else {
                  sum += (double)5.563878064406545754;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9800500000000000878) ) ) {
            sum += (double)8.319367672846867734;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02421650000000000538) ) ) {
              sum += (double)5.881830671855381887;
            } else {
              sum += (double)4.135123847158332033;
            }
          }
        }
      }
    } else {
      sum += (double)1.18957718440464566;
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
      sum += (double)-0.01306241774708247552;
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1402.000000000000227) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)25.50000000000000355) ) ) {
          sum += (double)1.39124814033508315;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01634985000000000258) ) ) {
            sum += (double)2.235002476828439111;
          } else {
            sum += (double)6.740766513070394872;
          }
        }
      } else {
        sum += (double)0.005996130408796792981;
      }
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)202.0000000000000284) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1421.500000000000227) ) ) {
        sum += (double)4.546228562894399694;
      } else {
        sum += (double)0.6652747821807861728;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)108.5000000000000142) ) ) {
        sum += (double)6.245238879831826573;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)265.5000000000000568) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01077555000000000179) ) ) {
            sum += (double)1.578938806056976452;
          } else {
            sum += (double)5.079082354983768255;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)902.0000000000001137) ) ) {
            sum += (double)9.136102294921874645;
          } else {
            sum += (double)3.260016163190206484;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02509105000000000363) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)564.5000000000001137) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008557765000000001898) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)158.5000000000000284) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007102530000000000995) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)77.50000000000001421) ) ) {
                    sum += (double)-5.855011388417836748;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)98.50000000000001421) ) ) {
                      sum += (double)-0.5366466665267944913;
                    } else {
                      sum += (double)-4.870693878597683657;
                    }
                  }
                } else {
                  sum += (double)-3.343935284820180875;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00825941000000000175) ) ) {
                  sum += (double)-4.400740719867008544;
                } else {
                  sum += (double)-7.607916190776419008;
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-305.9999999999999432) ) ) {
                sum += (double)-3.858061679797037513;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)53.50000000000000711) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)602.0000000000001137) ) ) {
                    sum += (double)-3.534604144911016821;
                  } else {
                    sum += (double)-5.545010049415357578;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)315.5000000000000568) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)194.5000000000000284) ) ) {
                      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1198.000000000000227) ) ) {
                        sum += (double)-2.894690109869175743;
                      } else {
                        sum += (double)-4.482372877231011188;
                      }
                    } else {
                      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009989275000000000584) ) ) {
                        sum += (double)-3.566689083155464068;
                      } else {
                        sum += (double)-1.268000034139126209;
                      }
                    }
                  } else {
                    sum += (double)-4.149418413872812295;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0104385000000000016) ) ) {
              sum += (double)-3.606684945424397881;
            } else {
              sum += (double)-1.364621539806064821;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)54.50000000000000711) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2274.000000000000455) ) ) {
              if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
                sum += (double)-7.012107651284400056;
              } else {
                sum += (double)-3.678047991532546135;
              }
            } else {
              sum += (double)-0.2401735857554844478;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)440.5000000000000568) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)154.5000000000000284) ) ) {
                sum += (double)-1.984634653252748793;
              } else {
                sum += (double)-0.3635024640479571634;
              }
            } else {
              sum += (double)-2.827316822324480228;
            }
          }
        }
      } else {
        sum += (double)4.545836750465103826;
      }
    } else {
      sum += (double)0.002777599839903693423;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)202.0000000000000284) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1421.500000000000227) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)54.00000000000000711) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)837.5000000000001137) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-21.99999999999999645) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)54.50000000000000711) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)17.50000000000000355) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)12.50000000000000178) ) ) {
                    sum += (double)4.92855537051246273;
                  } else {
                    sum += (double)1.175416714212168756;
                  }
                } else {
                  sum += (double)5.027347849213878561;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)84.50000000000001421) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3197.999999999999545) ) ) {
                    sum += (double)6.969277842839558978;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2389.999999999999545) ) ) {
                      sum += (double)0.813297605514526456;
                    } else {
                      sum += (double)3.573168312955997017;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9960040000000001115) ) ) {
                    sum += (double)7.163895531856653065;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)87.50000000000001421) ) ) {
                      sum += (double)6.438749260372586214;
                    } else {
                      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)90.50000000000001421) ) ) {
                        sum += (double)1.649132306235177259;
                      } else {
                        sum += (double)4.341689817943270135;
                      }
                    }
                  }
                }
              }
            } else {
              sum += (double)6.458248641967715642;
            }
          } else {
            sum += (double)7.956826904296875114;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)94.00000000000001421) ) ) {
            sum += (double)0.9397141425840316309;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)162.5000000000000284) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)72.50000000000001421) ) ) {
                sum += (double)3.186634263538179468;
              } else {
                sum += (double)7.287785173499066183;
              }
            } else {
              sum += (double)1.394354473460804433;
            }
          }
        }
      } else {
        sum += (double)0.6320109844207764116;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)108.5000000000000142) ) ) {
        sum += (double)5.932976927408358137;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)265.5000000000000568) ) ) {
          sum += (double)3.283035963860111206;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)902.0000000000001137) ) ) {
            sum += (double)8.679297289641008106;
          } else {
            sum += (double)3.097015468279520789;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)184.5000000000000284) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1537.999999999999773) ) ) {
            sum += (double)-4.929240483969030251;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)50.50000000000000711) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2622.000000000000455) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)49.50000000000000711) ) ) {
                  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
                    sum += (double)-6.012513828277588068;
                  } else {
                    sum += (double)-3.679014297141971479;
                  }
                } else {
                  sum += (double)-6.467753407690260303;
                }
              } else {
                sum += (double)-0.5920305967330933283;
              }
            } else {
              sum += (double)-3.014878376407851945;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)3474.000000000000455) ) ) {
            sum += (double)-2.270396880517679072;
          } else {
            sum += (double)-0.1666088488637184617;
          }
        }
      } else {
        sum += (double)4.318544979336895295;
      }
    } else {
      sum += (double)0.002638719843155868782;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)202.0000000000000284) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1421.500000000000227) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)54.00000000000000711) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)837.5000000000001137) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-21.99999999999999645) ) ) {
              sum += (double)4.073739854778205327;
            } else {
              sum += (double)6.135336288452148956;
            }
          } else {
            sum += (double)7.558985519409180398;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)94.00000000000001421) ) ) {
            sum += (double)0.8927284117667906305;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)162.5000000000000284) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)72.50000000000001421) ) ) {
                sum += (double)3.027302514939081313;
              } else {
                sum += (double)6.923395870042885036;
              }
            } else {
              sum += (double)1.324636728113347983;
            }
          }
        }
      } else {
        sum += (double)0.6004104328155518422;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)108.5000000000000142) ) ) {
        sum += (double)5.636328087783441632;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)265.5000000000000568) ) ) {
          sum += (double)3.118884172301362057;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)902.0000000000001137) ) ) {
            sum += (double)8.245332336425780895;
          } else {
            sum += (double)2.942164675394694395;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)180.5000000000000284) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-501.9999999999999432) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)69.50000000000001421) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-797.9999999999998863) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)59.50000000000000711) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)31.50000000000000355) ) ) {
                    sum += (double)-3.80945310062832343;
                  } else {
                    sum += (double)-6.760339238908556148;
                  }
                } else {
                  sum += (double)-1.739745773587908051;
                }
              } else {
                sum += (double)-5.674751291088029781;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1537.999999999999773) ) ) {
                sum += (double)-4.788361781270880968;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)142.5000000000000284) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)124.5000000000000142) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)85.50000000000001421) ) ) {
                      sum += (double)-1.619541015408255902;
                    } else {
                      sum += (double)-3.582848335622431435;
                    }
                  } else {
                    sum += (double)-0.3871866474151611226;
                  }
                } else {
                  sum += (double)-4.285612674381422238;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)50.50000000000000711) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2622.000000000000455) ) ) {
                if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
                  sum += (double)-6.571966485977172923;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)49.50000000000000711) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)602.0000000000001137) ) ) {
                      sum += (double)-3.209747329711913899;
                    } else {
                      sum += (double)-4.849193217303302106;
                    }
                  } else {
                    sum += (double)-5.9150665223598482;
                  }
                }
              } else {
                sum += (double)-0.5624290704727172852;
              }
            } else {
              sum += (double)-2.759963781862653676;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)3474.000000000000455) ) ) {
            sum += (double)-2.168142921483177776;
          } else {
            sum += (double)-0.1194112567340626652;
          }
        }
      } else {
        sum += (double)4.102617703208440325;
      }
    } else {
      sum += (double)0.002506783846866221521;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01237795000000000041) ) ) {
      sum += (double)-6.802810423714774402;
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2389.999999999999545) ) ) {
        sum += (double)-4.794154517881332289;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)14.50000000000000178) ) ) {
          sum += (double)-5.282892329042608637;
        } else {
          sum += (double)-1.034589165821671486;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-533.9999999999998863) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-801.9999999999998863) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)50.50000000000000711) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)16.50000000000000355) ) ) {
              sum += (double)-0.2108862317841628531;
            } else {
              sum += (double)3.55669662594177538;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01482065000000000118) ) ) {
              sum += (double)1.893523176275603737;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01555560000000000102) ) ) {
                sum += (double)-1.256708659377752779;
              } else {
                sum += (double)1.186702619251868596;
              }
            }
          }
        } else {
          sum += (double)0.7652591726375934655;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03957025000000000819) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-137.9999999999999716) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)71.50000000000001421) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01054655000000000176) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.006866725000000001473) ) ) {
                  sum += (double)-3.641266476024281218;
                } else {
                  sum += (double)1.209798120594710813;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01106415000000000176) ) ) {
                  sum += (double)-4.664649631131079666;
                } else {
                  sum += (double)-0.7796463612632864582;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01280645000000000221) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)84.50000000000001421) ) ) {
                  sum += (double)-3.230836292377953445;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-197.9999999999999716) ) ) {
                    sum += (double)-1.49671193506266631;
                  } else {
                    sum += (double)0.805424232482910174;
                  }
                }
              } else {
                sum += (double)-0.2785782384743908935;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0104385000000000016) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007102530000000000995) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)374.0000000000000568) ) ) {
                  sum += (double)-5.069410833498327662;
                } else {
                  sum += (double)0.3336695575714111461;
                }
              } else {
                sum += (double)-1.967969813396361678;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1.00000001800250948e-35) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)118.5000000000000142) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)98.50000000000001421) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02054980000000000348) ) ) {
                      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)64.50000000000001421) ) ) {
                        sum += (double)-3.90888080596923837;
                      } else {
                        sum += (double)-0.9677789292245541075;
                      }
                    } else {
                      sum += (double)0.6997040950890743849;
                    }
                  } else {
                    sum += (double)-8.100438771929059811;
                  }
                } else {
                  sum += (double)-1.079254198074340865;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)86.50000000000001421) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01100445000000000069) ) ) {
                    sum += (double)0.8475936072213310357;
                  } else {
                    sum += (double)-1.665147231013764717;
                  }
                } else {
                  sum += (double)-0.438460842685995944;
                }
              }
            }
          }
        } else {
          sum += (double)0.6385289500487174585;
        }
      }
    } else {
      sum += (double)0.002379928421125797333;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-321.9999999999999432) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03088120000000000101) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02203880000000000075) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01781075000000000366) ) ) {
            sum += (double)3.768948586249861066;
          } else {
            sum += (double)2.473936753045945292;
          }
        } else {
          sum += (double)6.466962820024632741;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04695285000000001124) ) ) {
          sum += (double)1.525702774661710892;
        } else {
          sum += (double)3.826397557576497466;
        }
      }
    } else {
      sum += (double)4.561855782347840282;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02509105000000000363) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01266265000000000272) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.006561365000000000426) ) ) {
              sum += (double)-4.854148296643329807;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9661970000000000836) ) ) {
                sum += (double)-1.424171600341797017;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01251765000000000343) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9813660000000000716) ) ) {
                    sum += (double)-6.060643834653108186;
                  } else {
                    sum += (double)-3.118695333869712094;
                  }
                } else {
                  sum += (double)-5.453002314340500867;
                }
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1.00000001800250948e-35) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01421345000000000074) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-237.9999999999999716) ) ) {
                  sum += (double)-1.136110900596336126;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-109.9999999999999858) ) ) {
                    sum += (double)-5.091350219989645431;
                  } else {
                    sum += (double)-1.753385374281141829;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01793235000000000315) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-869.9999999999998863) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1277.999999999999773) ) ) {
                      sum += (double)-4.211087965965271351;
                    } else {
                      sum += (double)-9.190593800544737846;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-101.9999999999999858) ) ) {
                      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0156507000000000035) ) ) {
                        sum += (double)-1.896917027473449924;
                      } else {
                        sum += (double)-3.811721504340737976;
                      }
                    } else {
                      sum += (double)-5.226832793479742278;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01922215000000000382) ) ) {
                    sum += (double)-1.101086780990379488;
                  } else {
                    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
                      sum += (double)0.03685085877128269766;
                    } else {
                      sum += (double)-3.304880735278129755;
                    }
                  }
                }
              }
            } else {
              sum += (double)-2.120058965831530973;
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-289.9999999999999432) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07886890000000000567) ) ) {
              sum += (double)-2.571854043112860921;
            } else {
              if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
                sum += (double)-3.419819034674228764;
              } else {
                sum += (double)0.1429113941314893166;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06057575000000000459) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)290.0000000000000568) ) ) {
                sum += (double)-0.6181247981626596388;
              } else {
                sum += (double)-2.129934487930716269;
              }
            } else {
              sum += (double)-0.1607792510022325316;
            }
          }
        }
      } else {
        sum += (double)4.288086076216264253;
      }
    } else {
      sum += (double)0.002260932000837843903;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-321.9999999999999432) ) ) {
      sum += (double)3.49020679965862568;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)194.5000000000000284) ) ) {
        sum += (double)4.617016280706270237;
      } else {
        sum += (double)3.475105073938819178;
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)121.5000000000000142) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-505.9999999999999432) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)70.50000000000001421) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-797.9999999999998863) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1085.999999999999773) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1861.999999999999773) ) ) {
                    sum += (double)-4.257848677635193368;
                  } else {
                    sum += (double)-7.423869109153748092;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)53.50000000000000711) ) ) {
                    sum += (double)-4.348697778452997653;
                  } else {
                    sum += (double)-0.7418417700405779414;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)53.50000000000000711) ) ) {
                  sum += (double)-4.147291273637251585;
                } else {
                  sum += (double)-7.324590827007682492;
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-909.9999999999998863) ) ) {
                sum += (double)-3.769821812371787928;
              } else {
                sum += (double)-2.192257910239987506;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)106.5000000000000142) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)3902.000000000000455) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)846.0000000000001137) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)50.50000000000000711) ) ) {
                    sum += (double)-3.029292912098552559;
                  } else {
                    sum += (double)-2.224546358006481039;
                  }
                } else {
                  sum += (double)-3.943582203513697593;
                }
              } else {
                sum += (double)0.4351680004235469745;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)718.0000000000001137) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)119.5000000000000142) ) ) {
                  sum += (double)-4.608542341728733227;
                } else {
                  sum += (double)-8.421602373123169727;
                }
              } else {
                sum += (double)-1.372415065765380859;
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-389.9999999999999432) ) ) {
              sum += (double)-2.27808924685703218;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)14.00000000000000178) ) ) {
                sum += (double)0.5123253179400154567;
              } else {
                sum += (double)-1.514039110122842979;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)682.0000000000001137) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)202.5000000000000284) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1773.999999999999773) ) ) {
                  sum += (double)-5.98645620346069407;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)142.5000000000000284) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)82.00000000000001421) ) ) {
                      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-141.9999999999999716) ) ) {
                        sum += (double)-1.796450210500646349;
                      } else {
                        sum += (double)0.4138893500618312515;
                      }
                    } else {
                      sum += (double)-3.059683993091322218;
                    }
                  } else {
                    sum += (double)-2.851438093709421917;
                  }
                }
              } else {
                sum += (double)-2.034980094046262789;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)152.5000000000000284) ) ) {
                sum += (double)0.4904003461201985603;
              } else {
                sum += (double)-1.638095604718900367;
              }
            }
          }
        }
      } else {
        sum += (double)4.073681779341264075;
      }
    } else {
      sum += (double)0.002147885346841185532;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-321.9999999999999432) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03289050000000001001) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02203880000000000075) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01781075000000000366) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009445230000000000639) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3633.999999999999545) ) ) {
                sum += (double)0.2846152114868163996;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1689.999999999999773) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1861.999999999999773) ) ) {
                    sum += (double)3.805776234330802144;
                  } else {
                    sum += (double)6.306137645244598744;
                  }
                } else {
                  sum += (double)2.892666130187212303;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009590715000000001392) ) ) {
                sum += (double)6.832894030484286674;
              } else {
                sum += (double)3.589926858711883551;
              }
            }
          } else {
            sum += (double)2.175729603670081058;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02442820000000000408) ) ) {
            sum += (double)7.928098438404224346;
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-757.9999999999998863) ) ) {
              sum += (double)5.978856027537378992;
            } else {
              sum += (double)1.924944496154785245;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04695285000000001124) ) ) {
          sum += (double)1.088494366865891738;
        } else {
          sum += (double)3.460567337036133395;
        }
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-297.9999999999999432) ) ) {
        sum += (double)5.902995645082913967;
      } else {
        sum += (double)3.987732392632529876;
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02509105000000000363) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01094635000000000226) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.006561365000000000426) ) ) {
              sum += (double)-4.475815446915165197;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9477100000000001634) ) ) {
                sum += (double)-0.7882992935180664906;
              } else {
                sum += (double)-2.939199443837498649;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)122.0000000000000142) ) ) {
              sum += (double)-2.631452639943207661;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)402.0000000000000568) ) ) {
                sum += (double)-1.073547634628583713;
              } else {
                sum += (double)-2.385381197380030738;
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-205.9999999999999716) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07886890000000000567) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05776445000000000191) ) ) {
                sum += (double)-1.908025503805859557;
              } else {
                sum += (double)-4.818254212979917739;
              }
            } else {
              if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
                sum += (double)-3.052535966726450223;
              } else {
                sum += (double)0.2449683219958574409;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06057575000000000459) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)290.0000000000000568) ) ) {
                sum += (double)-0.4485590298970540402;
              } else {
                sum += (double)-1.92203513563495787;
              }
            } else {
              sum += (double)-0.03084639800678600288;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01584075000000000413) ) ) {
          sum += (double)1.477522404988606874;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1328620000000000356) ) ) {
            sum += (double)6.353944050181996595;
          } else {
            sum += (double)2.490508651733398526;
          }
        }
      }
    } else {
      sum += (double)0.00204049114896835259;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01237795000000000041) ) ) {
      sum += (double)-6.019643311273483732;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)14.50000000000000178) ) ) {
        sum += (double)-4.826352691650391158;
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1085.999999999999773) ) ) {
          sum += (double)-3.724342988177044234;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01936015000000000305) ) ) {
            sum += (double)-3.319615022067365917;
          } else {
            sum += (double)-0.4526784168867878377;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-533.9999999999998863) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-937.9999999999998863) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)50.50000000000000711) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)16.50000000000000355) ) ) {
              sum += (double)-0.9800682980081308893;
            } else {
              sum += (double)3.107553418477376539;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01317555000000000288) ) ) {
              sum += (double)1.702749031381338263;
            } else {
              sum += (double)0.8505357356213812947;
            }
          }
        } else {
          sum += (double)0.7341616425597877749;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05533510000000000512) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01348340000000000129) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-121.9999999999999858) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)71.50000000000001421) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01054655000000000176) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.006866725000000001473) ) ) {
                    sum += (double)-3.203374264457009346;
                  } else {
                    sum += (double)1.082930892141241719;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01118725000000000101) ) ) {
                    sum += (double)-3.65797721583668789;
                  } else {
                    sum += (double)-0.2150704314491965752;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)84.50000000000001421) ) ) {
                  sum += (double)-2.778378940272975939;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)104.5000000000000142) ) ) {
                    sum += (double)0.2093965468868132784;
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-197.9999999999999716) ) ) {
                      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)125.5000000000000142) ) ) {
                        sum += (double)-3.080102211801629242;
                      } else {
                        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)172.5000000000000284) ) ) {
                          sum += (double)0.06655831374521330168;
                        } else {
                          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)180.5000000000000284) ) ) {
                            sum += (double)-4.844250137329101591;
                          } else {
                            sum += (double)-1.350239451128737445;
                          }
                        }
                      }
                    } else {
                      sum += (double)0.7972163083260519478;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007102530000000000995) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)374.0000000000000568) ) ) {
                  sum += (double)-4.450181486548447474;
                } else {
                  sum += (double)0.5995118141174317072;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)702.0000000000001137) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)490.0000000000000568) ) ) {
                    sum += (double)-1.399574208222732707;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008170265000000001207) ) ) {
                      sum += (double)-7.23014196395874098;
                    } else {
                      sum += (double)-2.870061281692883437;
                    }
                  }
                } else {
                  sum += (double)-0.7363230607641025882;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)38.50000000000000711) ) ) {
              sum += (double)-2.041395673647032005;
            } else {
              sum += (double)-0.4339925861556363507;
            }
          }
        } else {
          sum += (double)0.9353845422728019887;
        }
      }
    } else {
      sum += (double)0.001938466525807582171;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-429.9999999999999432) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009445230000000000639) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009289325000000002788) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2853.999999999999545) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00807545500000000048) ) ) {
              sum += (double)4.03637338118119704;
            } else {
              sum += (double)-0.6479109211971886273;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1601.999999999999773) ) ) {
              sum += (double)3.924873030185699552;
            } else {
              sum += (double)2.742399328440307205;
            }
          }
        } else {
          sum += (double)0.6040636639262354501;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01537025000000000197) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01388095000000000127) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)192.5000000000000284) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-533.9999999999998863) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)54.50000000000000711) ) ) {
                  sum += (double)4.547859266434592485;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)71.50000000000001421) ) ) {
                    sum += (double)1.109198321387881325;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)92.50000000000001421) ) ) {
                      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01106415000000000176) ) ) {
                        sum += (double)3.861909900241428328;
                      } else {
                        sum += (double)7.463880395889282759;
                      }
                    } else {
                      sum += (double)3.010078738285945299;
                    }
                  }
                }
              } else {
                sum += (double)0.8500126759211221739;
              }
            } else {
              sum += (double)4.851711204460075422;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)101.5000000000000142) ) ) {
              sum += (double)8.007694957130834013;
            } else {
              sum += (double)3.8648476987271696;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01545895000000000082) ) ) {
            sum += (double)-2.104736900329589933;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)627.5000000000001137) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)96.50000000000001421) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-565.9999999999998863) ) ) {
                  sum += (double)2.184516661507742707;
                } else {
                  sum += (double)4.879829788208008168;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)107.5000000000000142) ) ) {
                  sum += (double)7.020241762244182837;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)315.5000000000000568) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03289050000000001001) ) ) {
                      sum += (double)3.964286131711350247;
                    } else {
                      sum += (double)0.1375374688042534932;
                    }
                  } else {
                    sum += (double)5.790648712983003321;
                  }
                }
              }
            } else {
              sum += (double)0.5365813515403053957;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)966.5000000000001137) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02707275000000000306) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01156380000000000081) ) ) {
            sum += (double)3.878115387112194057;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)73.50000000000001421) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)398.0000000000000568) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)43.50000000000000711) ) ) {
                  sum += (double)5.097947225570679031;
                } else {
                  sum += (double)2.199527273043780262;
                }
              } else {
                sum += (double)6.002146788566343538;
              }
            } else {
              sum += (double)5.679704789055718628;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04982810000000000711) ) ) {
            sum += (double)1.559285695929276461;
          } else {
            sum += (double)5.125604629516601563;
          }
        }
      } else {
        sum += (double)1.152033945230337419;
      }
    }
  } else {
    sum += (double)-0.009180627646906644804;
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-429.9999999999999432) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007467930000000001095) ) ) {
        sum += (double)2.141092674548809693;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00774926000000000087) ) ) {
          sum += (double)4.982117032137784562;
        } else {
          sum += (double)2.905050892248668859;
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01922215000000000382) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01156380000000000081) ) ) {
          sum += (double)3.674912231769360549;
        } else {
          sum += (double)4.750334956728178959;
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)462.0000000000000568) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04982810000000000711) ) ) {
            sum += (double)1.688571181664100029;
          } else {
            sum += (double)5.482430303664434845;
          }
        } else {
          sum += (double)4.668702599661691544;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02442820000000000408) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009493430000000002353) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009445230000000000639) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1537.999999999999773) ) ) {
                sum += (double)-4.678562265709985901;
              } else {
                sum += (double)-2.83512516132460668;
              }
            } else {
              sum += (double)-5.598224492754255266;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-205.9999999999999716) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02203880000000000075) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-221.9999999999999716) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01584075000000000413) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01333370000000000215) ) ) {
                      sum += (double)-2.789724879003876001;
                    } else {
                      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.014385700000000003) ) ) {
                        sum += (double)-0.440541848383451784;
                      } else {
                        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-869.9999999999998863) ) ) {
                          sum += (double)-6.850012805245139447;
                        } else {
                          sum += (double)-1.47503728504422349;
                        }
                      }
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01793235000000000315) ) ) {
                      sum += (double)-4.494004330776705913;
                    } else {
                      sum += (double)-2.894015812873840687;
                    }
                  }
                } else {
                  sum += (double)-6.039235051472982008;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02299745000000000608) ) ) {
                  sum += (double)1.022947416634395257;
                } else {
                  sum += (double)-3.402158658400826319;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02087210000000000454) ) ) {
                sum += (double)-1.956501995135786265;
              } else {
                sum += (double)-3.173051335973647191;
              }
            }
          }
        } else {
          sum += (double)3.255460519057054469;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9800500000000000878) ) ) {
            sum += (double)-3.403417646473851477;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04281455000000000677) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03957025000000000819) ) ) {
                sum += (double)-1.082095249839450934;
              } else {
                sum += (double)-3.254063871928623897;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1277.999999999999773) ) ) {
                if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
                  sum += (double)-4.107130389743381293;
                } else {
                  sum += (double)-0.2133800167507595436;
                }
              } else {
                sum += (double)-0.2353111180884779052;
              }
            }
          }
        } else {
          sum += (double)2.732751729537029828;
        }
      }
    } else {
      sum += (double)0.00230456263806531848;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-429.9999999999999432) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)897.5000000000001137) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)783.5000000000001137) ) ) {
          sum += (double)2.745994898362407621;
        } else {
          sum += (double)-0.1170078595479329409;
        }
      } else {
        sum += (double)5.254225594656809051;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)966.5000000000001137) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)564.5000000000001137) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)202.5000000000000284) ) ) {
            sum += (double)3.864937132613666115;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)223.5000000000000284) ) ) {
              sum += (double)-0.3571028164454869147;
            } else {
              sum += (double)3.416922017415364721;
            }
          }
        } else {
          sum += (double)6.25574126470656644;
        }
      } else {
        sum += (double)0.9320937376755934478;
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)180.5000000000000284) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1537.999999999999773) ) ) {
            sum += (double)-4.037601138161612369;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)4506.000000000000909) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)47.50000000000000711) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-141.9999999999999716) ) ) {
                  sum += (double)-3.455722533832897181;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)18.50000000000000355) ) ) {
                    sum += (double)-4.21064172224564981;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)29.50000000000000355) ) ) {
                      sum += (double)-1.319921736992322625;
                    } else {
                      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)31.50000000000000355) ) ) {
                        sum += (double)-5.981942677497864125;
                      } else {
                        sum += (double)-2.420829826164245802;
                      }
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1270.000000000000227) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)698.0000000000001137) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)386.0000000000000568) ) ) {
                      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1.00000001800250948e-35) ) ) {
                        sum += (double)-2.335745044131028347;
                      } else {
                        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)107.5000000000000142) ) ) {
                          sum += (double)-1.131618239961821537;
                        } else {
                          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)133.5000000000000284) ) ) {
                            sum += (double)-4.181166554920709544;
                          } else {
                            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)162.0000000000000284) ) ) {
                              sum += (double)0.4828466987609862926;
                            } else {
                              sum += (double)-3.381182487643494827;
                            }
                          }
                        }
                      }
                    } else {
                      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)54.50000000000000711) ) ) {
                        sum += (double)-6.841840044657390152;
                      } else {
                        sum += (double)-2.99389405822753929;
                      }
                    }
                  } else {
                    sum += (double)-1.186051184703142303;
                  }
                } else {
                  sum += (double)-3.221674014264204633;
                }
              }
            } else {
              sum += (double)0.09116018931070964115;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)897.5000000000001137) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)3474.000000000000455) ) ) {
              if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
                sum += (double)-0.5732442276987863572;
              } else {
                sum += (double)-1.675113519596972189;
              }
            } else {
              sum += (double)0.5875345431433783849;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1244.500000000000227) ) ) {
              sum += (double)-3.871736549448083764;
            } else {
              sum += (double)-1.379955570117847419;
            }
          }
        }
      } else {
        sum += (double)2.768259567260742404;
      }
    } else {
      sum += (double)0.002189334547880046698;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03382110000000001365) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01088875000000000086) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)564.5000000000001137) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)493.5000000000000568) ) ) {
            sum += (double)2.695455484545933089;
          } else {
            sum += (double)0.4488234187281409659;
          }
        } else {
          sum += (double)5.301596845429519256;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01537025000000000197) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01355995000000000117) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0132556500000000025) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)190.5000000000000284) ) ) {
                sum += (double)3.499042409116571495;
              } else {
                sum += (double)5.239392385482788406;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)66.50000000000001421) ) ) {
                sum += (double)-2.832423162460327326;
              } else {
                sum += (double)2.222844023931594304;
              }
            }
          } else {
            sum += (double)4.755694372003729242;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01545895000000000082) ) ) {
            sum += (double)-1.096285565694173236;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)61.50000000000000711) ) ) {
              sum += (double)2.079237985022273971;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)466.5000000000000568) ) ) {
                sum += (double)3.744657747708834084;
              } else {
                sum += (double)1.023936921899968988;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04695285000000001124) ) ) {
        sum += (double)0.5328729818155477638;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)265.5000000000000568) ) ) {
          sum += (double)2.43137432152116828;
        } else {
          sum += (double)5.620564637360749849;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02442820000000000408) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009493430000000002353) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)87.50000000000001421) ) ) {
              sum += (double)-2.229399363972857984;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009339625000000002439) ) ) {
                sum += (double)-3.017415921156573422;
              } else {
                sum += (double)-4.990213292958785019;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)188.5000000000000284) ) ) {
              if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
                sum += (double)-5.119773489429104707;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02299745000000000608) ) ) {
                  sum += (double)-2.257356194554426931;
                } else {
                  sum += (double)-4.955243225097657245;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01150015000000000238) ) ) {
                sum += (double)-2.230724401731748685;
              } else {
                sum += (double)-1.136486208611640292;
              }
            }
          }
        } else {
          sum += (double)2.954274456317608433;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)45.50000000000000711) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.240185500000000024) ) ) {
              sum += (double)-3.848808817241502922;
            } else {
              sum += (double)-0.3655310039934904776;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)466.5000000000000568) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)160.5000000000000284) ) ) {
                sum += (double)-0.9792649002398475799;
              } else {
                sum += (double)0.1735778905186257381;
              }
            } else {
              sum += (double)-1.889022232237316246;
            }
          }
        } else {
          sum += (double)2.457701219831194273;
        }
      }
    } else {
      sum += (double)0.002079867797588013864;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-429.9999999999999432) ) ) {
      sum += (double)2.458668813146806631;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)966.5000000000001137) ) ) {
        sum += (double)3.383220839735454177;
      } else {
        sum += (double)0.7148437059842622787;
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02442820000000000408) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009493430000000002353) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)106.5000000000000142) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)386.0000000000000568) ) ) {
                sum += (double)-1.980592301734412475;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)510.0000000000000568) ) ) {
                  sum += (double)-6.088047287680886654;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007976505000000001788) ) ) {
                    sum += (double)0.2965520775836447132;
                  } else {
                    sum += (double)-3.856182339008038085;
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1773.999999999999773) ) ) {
                sum += (double)-6.170396499633788778;
              } else {
                sum += (double)-2.905612692909296246;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)188.5000000000000284) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1537.999999999999773) ) ) {
                sum += (double)-4.767166818891253044;
              } else {
                if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
                  sum += (double)-4.725158589680989785;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01733255000000000559) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)870.0000000000001137) ) ) {
                      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)702.0000000000001137) ) ) {
                        sum += (double)-1.936904065074816605;
                      } else {
                        sum += (double)0.3929103488013858114;
                      }
                    } else {
                      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)146.5000000000000284) ) ) {
                        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)98.50000000000001421) ) ) {
                          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01065965000000000142) ) ) {
                            sum += (double)-0.8020604372024536799;
                          } else {
                            sum += (double)-4.372959042977595523;
                          }
                        } else {
                          sum += (double)0.2588950404414424589;
                        }
                      } else {
                        sum += (double)-6.116641960144043821;
                      }
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-229.9999999999999716) ) ) {
                      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)73.50000000000001421) ) ) {
                        sum += (double)-5.73810084025065148;
                      } else {
                        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)91.50000000000001421) ) ) {
                          sum += (double)-0.6593032223837717032;
                        } else {
                          sum += (double)-3.788021267377413182;
                        }
                      }
                    } else {
                      sum += (double)-2.195752525329589755;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-305.9999999999999432) ) ) {
                sum += (double)-2.101475811387640391;
              } else {
                sum += (double)-1.034601249694824254;
              }
            }
          }
        } else {
          sum += (double)2.806560795123760776;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)45.50000000000000711) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2622.000000000000455) ) ) {
              sum += (double)-3.472029163767990756;
            } else {
              sum += (double)0.150268884386335122;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)466.5000000000000568) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)160.5000000000000284) ) ) {
                sum += (double)-0.9303016618146735528;
              } else {
                sum += (double)0.1648989944118756101;
              }
            } else {
              sum += (double)-1.794571115532700212;
            }
          }
        } else {
          sum += (double)2.334816119135642687;
        }
      }
    } else {
      sum += (double)0.001975874438928288106;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)202.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.006115895000000000532) ) ) {
        sum += (double)4.861090727413402313;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009788405000000001757) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2853.999999999999545) ) ) {
            sum += (double)0.3391446272532145367;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009590715000000001392) ) ) {
              sum += (double)2.232668997406709988;
            } else {
              sum += (double)0.5235569000244141291;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01537025000000000197) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01355995000000000117) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01245045000000000179) ) ) {
                sum += (double)3.074455941210892274;
              } else {
                sum += (double)1.80787221871170356;
              }
            } else {
              sum += (double)4.024574171236859677;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01545895000000000082) ) ) {
              sum += (double)-1.861574962221342888;
            } else {
              sum += (double)2.416600336557553241;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1690.000000000000227) ) ) {
        sum += (double)3.967662952370839324;
      } else {
        sum += (double)1.911195026744495706;
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02487190000000000581) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01094635000000000226) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-701.9999999999998863) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1017.999999999999886) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1537.999999999999773) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00774926000000000087) ) ) {
                    sum += (double)-5.867443141937256357;
                  } else {
                    sum += (double)-2.343713521245700093;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00807545500000000048) ) ) {
                    sum += (double)0.5417296194261120856;
                  } else {
                    sum += (double)-2.542332871754964252;
                  }
                }
              } else {
                sum += (double)-4.311894264221191264;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)386.0000000000000568) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008170265000000001207) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00807545500000000048) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-409.9999999999999432) ) ) {
                      sum += (double)-0.9277443911578204805;
                    } else {
                      sum += (double)-2.575604784042440087;
                    }
                  } else {
                    sum += (double)-5.062162736404774321;
                  }
                } else {
                  sum += (double)-1.858861582125046485;
                }
              } else {
                sum += (double)-2.996125964884377879;
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1.00000001800250948e-35) ) ) {
              sum += (double)-2.064612309622078978;
            } else {
              sum += (double)-1.493884607909292006;
            }
          }
        } else {
          sum += (double)2.300847122885964158;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1861.999999999999773) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2853.999999999999545) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4233.999999999999091) ) ) {
                sum += (double)-2.764206152251272641;
              } else {
                sum += (double)0.3973437089186448445;
              }
            } else {
              sum += (double)-4.730384240327057732;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06057575000000000459) ) ) {
              sum += (double)-0.9214330511339476892;
            } else {
              sum += (double)-0.03049939539697435129;
            }
          }
        } else {
          sum += (double)2.495356481725519604;
        }
      }
    } else {
      sum += (double)0.001875853081404697245;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.006115895000000000532) ) ) {
      sum += (double)4.618036225262810213;
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007467930000000001095) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)124.5000000000000142) ) ) {
          sum += (double)0.6861832631098759849;
        } else {
          sum += (double)2.708663168407621669;
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007617155000000001321) ) ) {
          sum += (double)5.791010602315267874;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)55.50000000000000711) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01614810000000000204) ) ) {
              sum += (double)3.634706625435766725;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0172195500000000036) ) ) {
                sum += (double)-0.8884211915912051394;
              } else {
                sum += (double)2.537643980979919611;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)63.50000000000000711) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02442820000000000408) ) ) {
                sum += (double)1.553005776038536734;
              } else {
                sum += (double)-2.866661005434782528;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009788405000000001757) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009590715000000001392) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)202.5000000000000284) ) ) {
                    sum += (double)2.446876660568454653;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)220.5000000000000284) ) ) {
                      sum += (double)-1.98339585335023938;
                    } else {
                      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)254.5000000000000284) ) ) {
                        sum += (double)4.809595870971680398;
                      } else {
                        sum += (double)1.109707789040782044;
                      }
                    }
                  }
                } else {
                  sum += (double)0.2732850922478570199;
                }
              } else {
                sum += (double)2.716326301157836909;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02487190000000000581) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01094635000000000226) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)113.5000000000000142) ) ) {
              sum += (double)-1.818968120595227056;
            } else {
              sum += (double)-2.830919985049009213;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)146.5000000000000284) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02299745000000000608) ) ) {
                sum += (double)-1.986763822770791554;
              } else {
                sum += (double)-5.135427652994792425;
              }
            } else {
              sum += (double)-1.173799064477685006;
            }
          }
        } else {
          sum += (double)2.185804835232821652;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)20.50000000000000355) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07886890000000000567) ) ) {
            sum += (double)-6.352573792830757959;
          } else {
            sum += (double)-1.583248463011624585;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)123.5000000000000142) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02946700000000000361) ) ) {
                sum += (double)0.0888183255738849986;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.348122000000000098) ) ) {
                  sum += (double)-2.7432244367377705;
                } else {
                  sum += (double)0.7799677034219105742;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)428.5000000000000568) ) ) {
                sum += (double)0.1497606753862278928;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05321745000000000642) ) ) {
                  sum += (double)-2.651845831266591347;
                } else {
                  sum += (double)-0.4749254263840712587;
                }
              }
            }
          } else {
            sum += (double)3.910100376605987638;
          }
        }
      }
    } else {
      sum += (double)0.001782060419487915565;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-301.9999999999999432) ) ) {
      sum += (double)2.077724775213569242;
    } else {
      sum += (double)2.81279808105306417;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0260519500000000008) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01094635000000000226) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)113.5000000000000142) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)394.0000000000000568) ) ) {
                sum += (double)-1.576128415200503508;
              } else {
                sum += (double)-2.712724155729467235;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-701.9999999999998863) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-965.9999999999998863) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1537.999999999999773) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2085.999999999999545) ) ) {
                      sum += (double)-2.509373318065296843;
                    } else {
                      sum += (double)-7.385819625854492365;
                    }
                  } else {
                    sum += (double)-1.095236357053120946;
                  }
                } else {
                  sum += (double)-5.541453354575417656;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)479.5000000000000568) ) ) {
                  sum += (double)-2.631261687518881232;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-209.9999999999999716) ) ) {
                    sum += (double)2.312953359430486522;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1.00000001800250948e-35) ) ) {
                      sum += (double)-5.484397821426391317;
                    } else {
                      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008627505000000002325) ) ) {
                        sum += (double)1.947440233230590678;
                      } else {
                        sum += (double)-2.799799148853008735;
                      }
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)146.5000000000000284) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1842.000000000000227) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)122.0000000000000142) ) ) {
                  sum += (double)-2.133468210895635764;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)242.0000000000000284) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)71.50000000000001421) ) ) {
                      sum += (double)1.487531233670418729;
                    } else {
                      sum += (double)-1.751876073895078934;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02087210000000000454) ) ) {
                      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)94.50000000000001421) ) ) {
                        sum += (double)-2.115817813582832052;
                      } else {
                        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)894.0000000000001137) ) ) {
                          sum += (double)-1.125428499857584752;
                        } else {
                          sum += (double)2.940448670160202838;
                        }
                      }
                    } else {
                      sum += (double)-4.617220082490340438;
                    }
                  }
                }
              } else {
                sum += (double)-4.533093680104902212;
              }
            } else {
              sum += (double)-1.130724818835704859;
            }
          }
        } else {
          sum += (double)2.076514590870250476;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)20.50000000000000355) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07886890000000000567) ) ) {
            sum += (double)-5.866184650767934272;
          } else {
            sum += (double)-1.504085974107709056;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1861.999999999999773) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)226.5000000000000284) ) ) {
                sum += (double)-4.950695937871933516;
              } else {
                sum += (double)-0.5680933590593009175;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)783.5000000000001137) ) ) {
                sum += (double)-0.1321723702102701736;
              } else {
                sum += (double)-2.410232783526909284;
              }
            }
          } else {
            sum += (double)3.714595341682434437;
          }
        }
      }
    } else {
      sum += (double)0.00169295741480799994;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-817.9999999999998863) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)134.5000000000000284) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007467930000000001095) ) ) {
          sum += (double)-0.05868243245245183953;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)124.5000000000000142) ) ) {
            sum += (double)1.766109368460519136;
          } else {
            sum += (double)-1.716362674419696477;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)452.5000000000000568) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-897.9999999999998863) ) ) {
            sum += (double)3.20144120168261459;
          } else {
            sum += (double)-0.4569977500221946709;
          }
        } else {
          sum += (double)0.8319521129640758961;
        }
      }
    } else {
      sum += (double)2.431548703974370618;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02487190000000000581) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01094635000000000226) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)113.5000000000000142) ) ) {
              sum += (double)-1.641618729361820517;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-701.9999999999998863) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-965.9999999999998863) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1537.999999999999773) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2085.999999999999545) ) ) {
                      sum += (double)-2.383904699845747821;
                    } else {
                      sum += (double)-7.016528676903766915;
                    }
                  } else {
                    sum += (double)-1.040474538008371974;
                  }
                } else {
                  sum += (double)-5.264380756724964527;
                }
              } else {
                sum += (double)-2.331171192885358678;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)146.5000000000000284) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02299745000000000608) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1842.000000000000227) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)122.0000000000000142) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02119220000000000478) ) ) {
                      sum += (double)-2.145635440726654242;
                    } else {
                      sum += (double)-0.06176403045654297458;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)234.0000000000000284) ) ) {
                      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)71.50000000000001421) ) ) {
                        sum += (double)1.591959734316225505;
                      } else {
                        sum += (double)-1.515482607195454356;
                      }
                    } else {
                      sum += (double)-1.506762657651476101;
                    }
                  }
                } else {
                  sum += (double)-4.373689059553475644;
                }
              } else {
                sum += (double)-4.765739364624024255;
              }
            } else {
              sum += (double)-1.058572881828327317;
            }
          }
        } else {
          sum += (double)1.972688865661621271;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)20.50000000000000355) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07251305000000000944) ) ) {
            sum += (double)-5.94666319347563288;
          } else {
            sum += (double)-1.503159384000099408;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1861.999999999999773) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)226.5000000000000284) ) ) {
                sum += (double)-4.474792185696688129;
              } else {
                sum += (double)-0.5396887055758772256;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06057575000000000459) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)388.5000000000000568) ) ) {
                  sum += (double)-0.3084998733572174578;
                } else {
                  sum += (double)-2.470091164679754314;
                }
              } else {
                sum += (double)0.3426868822461083264;
              }
            }
          } else {
            sum += (double)3.528865551948547452;
          }
        }
      }
    } else {
      sum += (double)0.001608309526967872374;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)274.0000000000000568) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.006115895000000000532) ) ) {
        sum += (double)4.208969688415527877;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009788405000000001757) ) ) {
          sum += (double)1.60736056253790327;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)85.50000000000001421) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)56.50000000000000711) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01614810000000000204) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-217.9999999999999716) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)24.50000000000000355) ) ) {
                    sum += (double)0.4420388984680175826;
                  } else {
                    sum += (double)4.640176302013975906;
                  }
                } else {
                  sum += (double)1.150974583625793413;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0172195500000000036) ) ) {
                  sum += (double)-0.8743310689926148127;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-517.9999999999998863) ) ) {
                    sum += (double)1.058842776038430022;
                  } else {
                    sum += (double)3.817592611978220418;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)63.50000000000000711) ) ) {
                sum += (double)-0.172230629609009922;
              } else {
                sum += (double)1.573296522401675279;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1421.500000000000227) ) ) {
              sum += (double)2.573854588296269341;
            } else {
              sum += (double)-0.6239018526944247744;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1690.000000000000227) ) ) {
        sum += (double)3.479888325415287031;
      } else {
        sum += (double)1.425159017389471039;
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02119220000000000478) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-701.9999999999998863) ) ) {
            sum += (double)-2.392228301844202321;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)479.5000000000000568) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)452.5000000000000568) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008170265000000001207) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00807545500000000048) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)116.5000000000000142) ) ) {
                      sum += (double)-1.588240191707872562;
                    } else {
                      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007467930000000001095) ) ) {
                        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)202.5000000000000284) ) ) {
                          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1.00000001800250948e-35) ) ) {
                            sum += (double)-1.677051286136403085;
                          } else {
                            sum += (double)-5.459905746459961406;
                          }
                        } else {
                          sum += (double)-0.1383799779982793909;
                        }
                      } else {
                        sum += (double)-4.229887342453003463;
                      }
                    }
                  } else {
                    sum += (double)-4.359358953922352953;
                  }
                } else {
                  sum += (double)-1.575868550507918853;
                }
              } else {
                sum += (double)-4.900973571430553122;
              }
            } else {
              sum += (double)-0.5557012872788512636;
            }
          }
        } else {
          sum += (double)1.874054388566450902;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)129.5000000000000284) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.348122000000000098) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03334140000000000714) ) ) {
                sum += (double)-1.098955915600473565;
              } else {
                sum += (double)-2.818786405132662765;
              }
            } else {
              sum += (double)0.7436707657575607477;
            }
          } else {
            sum += (double)1.903614194052559938;
          }
        } else {
          sum += (double)-0.1486813087025588009;
        }
      }
    } else {
      sum += (double)0.001527894074773502621;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008627505000000002325) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008486020000000002103) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)507.5000000000000568) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)327.5000000000000568) ) ) {
            sum += (double)1.591970402172633747;
          } else {
            sum += (double)4.776140733198686483;
          }
        } else {
          sum += (double)-0.7177422263405540681;
        }
      } else {
        sum += (double)0.008560527844375439427;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02442820000000000408) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02203880000000000075) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01818390000000000284) ) ) {
            sum += (double)2.277654957917570666;
          } else {
            sum += (double)1.312392060300137331;
          }
        } else {
          sum += (double)4.917225506431178061;
        }
      } else {
        sum += (double)1.144319755224872948;
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01856355000000000158) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-597.9999999999998863) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01446935000000000061) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01259295000000000206) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)348.5000000000000568) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)299.5000000000000568) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01217135000000000265) ) ) {
                      sum += (double)-1.840135231937270577;
                    } else {
                      sum += (double)-4.731557563781738196;
                    }
                  } else {
                    sum += (double)1.517552066984630743;
                  }
                } else {
                  sum += (double)-4.380517750519972608;
                }
              } else {
                sum += (double)0.7328468351221797406;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-909.9999999999998863) ) ) {
                sum += (double)-5.166471636572549819;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-697.9999999999998863) ) ) {
                  sum += (double)-0.4781095358041616561;
                } else {
                  sum += (double)-4.640236592292786177;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)564.5000000000001137) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007102530000000000995) ) ) {
                sum += (double)-2.651381265154536759;
              } else {
                sum += (double)-1.350617115935039747;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)863.5000000000001137) ) ) {
                sum += (double)1.183412920964228787;
              } else {
                sum += (double)-1.924320933024088465;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)123.5000000000000142) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-897.9999999999998863) ) ) {
              sum += (double)-3.250046276736568984;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01922215000000000382) ) ) {
                sum += (double)1.148414968675182779;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1149385000000000129) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)45.50000000000000711) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02733575000000000241) ) ) {
                      sum += (double)-1.853177592793449069;
                    } else {
                      sum += (double)-4.813729765608504074;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03427285000000000748) ) ) {
                      sum += (double)-0.7813082453292636842;
                    } else {
                      sum += (double)-3.112816889145795241;
                    }
                  }
                } else {
                  sum += (double)-0.02798071155300388066;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)783.5000000000001137) ) ) {
              sum += (double)0.0389955772791888769;
            } else {
              sum += (double)-2.74520070075988798;
            }
          }
        }
      } else {
        sum += (double)2.459601909235904049;
      }
    } else {
      sum += (double)0.001449614898574457141;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008627505000000002325) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008486020000000002103) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)507.5000000000000568) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)327.5000000000000568) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007467930000000001095) ) ) {
              sum += (double)0.8943203709156217762;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)202.5000000000000284) ) ) {
                sum += (double)2.354518930385175235;
              } else {
                sum += (double)0.1649177996317545691;
              }
            }
          } else {
            sum += (double)4.537333696538751404;
          }
        } else {
          sum += (double)-0.6818551236932928195;
        }
      } else {
        sum += (double)0.00813250166646550289;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02442820000000000408) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02203880000000000075) ) ) {
          sum += (double)2.068944961665355908;
        } else {
          sum += (double)4.671364232113487169;
        }
      } else {
        sum += (double)1.087103764101755798;
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01856355000000000158) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009738155000000000075) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)158.5000000000000284) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9488815000000000444) ) ) {
                sum += (double)1.512849365234375076;
              } else {
                sum += (double)-1.476914674585515952;
              }
            } else {
              sum += (double)-2.292349369489549371;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)197.5000000000000284) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01733255000000000559) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)168.5000000000000284) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)50.50000000000000711) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01472905000000000221) ) ) {
                      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01202925000000000175) ) ) {
                        sum += (double)-1.562315555572509895;
                      } else {
                        sum += (double)-3.467513789301333915;
                      }
                    } else {
                      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01584075000000000413) ) ) {
                        sum += (double)1.407340142893236834;
                      } else {
                        sum += (double)-1.643747247968401215;
                      }
                    }
                  } else {
                    sum += (double)-1.00898486791219244;
                  }
                } else {
                  sum += (double)-2.79530064361264019;
                }
              } else {
                sum += (double)-2.964963157360370527;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)299.5000000000000568) ) ) {
                sum += (double)0.01594011702627505869;
              } else {
                sum += (double)-1.290262485594059205;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)123.5000000000000142) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01922215000000000382) ) ) {
              sum += (double)0.8961070285123938772;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.348122000000000098) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03334140000000000714) ) ) {
                  sum += (double)-1.295826709576142211;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)31.50000000000000355) ) ) {
                    sum += (double)-1.539356061739799442;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)71.50000000000001421) ) ) {
                      sum += (double)-5.482722774304842339;
                    } else {
                      sum += (double)-2.020774196175968207;
                    }
                  }
                }
              } else {
                sum += (double)0.7046863254747893768;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)783.5000000000001137) ) ) {
              sum += (double)0.03704579124474585011;
            } else {
              sum += (double)-2.607940727869669573;
            }
          }
        }
      } else {
        sum += (double)2.336621891824822494;
      }
    } else {
      sum += (double)0.001377134160119483338;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008627505000000002325) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008486020000000002103) ) ) {
        sum += (double)1.391230952473109905;
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-457.9999999999999432) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1313.999999999999773) ) ) {
            sum += (double)-1.102930042661469434;
          } else {
            sum += (double)2.215159895613386887;
          }
        } else {
          sum += (double)-2.142971403702445876;
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02442820000000000408) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02203880000000000075) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01818390000000000284) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01355995000000000117) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0132556500000000025) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01162965000000000179) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01150015000000000238) ) ) {
                    sum += (double)1.954109002428414232;
                  } else {
                    sum += (double)-0.7669419394599067408;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1193.999999999999773) ) ) {
                    sum += (double)5.221125961303711094;
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-81.99999999999998579) ) ) {
                      sum += (double)1.628089036439594572;
                    } else {
                      sum += (double)3.521952351983988372;
                    }
                  }
                }
              } else {
                sum += (double)-1.846096454967152134;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01472905000000000221) ) ) {
                sum += (double)4.440616053919638873;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-29.99999999999999645) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01545895000000000082) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01537025000000000197) ) ) {
                      sum += (double)1.52898685621178676;
                    } else {
                      sum += (double)-1.279436351634838154;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1969.999999999999773) ) ) {
                      sum += (double)4.33284492492675799;
                    } else {
                      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-817.9999999999998863) ) ) {
                        sum += (double)0.7484656225276898889;
                      } else {
                        sum += (double)2.700241886942010172;
                      }
                    }
                  }
                } else {
                  sum += (double)3.967596524260764923;
                }
              }
            }
          } else {
            sum += (double)1.143325241575849693;
          }
        } else {
          sum += (double)4.437796000430458854;
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)70.00000000000001421) ) ) {
          sum += (double)1.313091378630953265;
        } else {
          sum += (double)-0.68524961227025738;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01856355000000000158) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-597.9999999999998863) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01446935000000000061) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01259295000000000206) ) ) {
                sum += (double)-1.922282627544440237;
              } else {
                sum += (double)0.7552198922456200281;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-869.9999999999998863) ) ) {
                sum += (double)-4.681787132730289791;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-697.9999999999998863) ) ) {
                  sum += (double)0.5491537284851074618;
                } else {
                  sum += (double)-4.344449369112650672;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007102530000000000995) ) ) {
              sum += (double)-2.325672410174100868;
            } else {
              sum += (double)-1.165942130382077391;
            }
          }
        } else {
          sum += (double)-0.59449094559611948;
        }
      } else {
        sum += (double)2.219790769878186687;
      }
    } else {
      sum += (double)0.00130827743139628745;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008627505000000002325) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)507.5000000000000568) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008486020000000002103) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)327.5000000000000568) ) ) {
            sum += (double)1.367191730907985292;
          } else {
            sum += (double)4.24090538024902397;
          }
        } else {
          sum += (double)-0.06746208884499289848;
        }
      } else {
        sum += (double)-0.5549414994981554106;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02442820000000000408) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02203880000000000075) ) ) {
          sum += (double)1.867222819102741571;
        } else {
          sum += (double)4.215906233536570014;
        }
      } else {
        sum += (double)0.9811111381585648772;
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01856355000000000158) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-597.9999999999998863) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01446935000000000061) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01259295000000000206) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)348.5000000000000568) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)299.5000000000000568) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01217135000000000265) ) ) {
                      sum += (double)-1.580491401028920606;
                    } else {
                      sum += (double)-4.329096801757812862;
                    }
                  } else {
                    sum += (double)1.619003186907087333;
                  }
                } else {
                  sum += (double)-3.974848901308499993;
                }
              } else {
                sum += (double)0.7174589242508162545;
              }
            } else {
              sum += (double)-3.296308784074680975;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)564.5000000000001137) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00825941000000000175) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-113.9999999999999858) ) ) {
                  sum += (double)-0.9499309060697872509;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)87.50000000000001421) ) ) {
                    sum += (double)-1.522801137853551978;
                  } else {
                    sum += (double)-3.11172271683102597;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1502.000000000000227) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)289.5000000000000568) ) ) {
                    sum += (double)-0.9536190760215300655;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01517625000000000224) ) ) {
                      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008949755000000001945) ) ) {
                        sum += (double)-3.655005841641812747;
                      } else {
                        sum += (double)-1.093034278869628784;
                      }
                    } else {
                      sum += (double)-3.983575191497802592;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)241.5000000000000284) ) ) {
                    sum += (double)-3.089616148499236825;
                  } else {
                    sum += (double)0.4288770980834961666;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)863.5000000000001137) ) ) {
                sum += (double)1.26092209258636867;
              } else {
                sum += (double)-1.681737458970811616;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)123.5000000000000142) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-897.9999999999998863) ) ) {
              sum += (double)-2.961645101572011995;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01922215000000000382) ) ) {
                sum += (double)1.07591344156572899;
              } else {
                sum += (double)-1.165250995685237267;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)783.5000000000001137) ) ) {
              sum += (double)0.06491804562116924859;
            } else {
              sum += (double)-2.447819102605183872;
            }
          }
        }
      } else {
        sum += (double)2.108801239415219353;
      }
    } else {
      sum += (double)0.001242863568938419681;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9930435000000000789) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)80.50000000000001421) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9413910000000001999) ) ) {
          sum += (double)-0.4498019714355468435;
        } else {
          sum += (double)2.690764195210225029;
        }
      } else {
        sum += (double)5.858918607234954834;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)17.50000000000000355) ) ) {
        sum += (double)-0.2180293412642045348;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)40.50000000000000711) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)37.50000000000000711) ) ) {
            sum += (double)2.066407911300659261;
          } else {
            sum += (double)4.323207931518554759;
          }
        } else {
          sum += (double)1.463975205672414681;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)58.50000000000000711) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-501.9999999999999432) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)48.50000000000000711) ) ) {
              sum += (double)-1.86579893508760053;
            } else {
              sum += (double)-5.009470144132288638;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)302.0000000000000568) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)262.0000000000000568) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.500000000000001776) ) ) {
                  sum += (double)-3.69110985755920451;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-405.9999999999999432) ) ) {
                    sum += (double)0.463509944568980814;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-289.9999999999999432) ) ) {
                      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)48.50000000000000711) ) ) {
                        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)40.50000000000000711) ) ) {
                          sum += (double)-3.10370252071282815;
                        } else {
                          sum += (double)0.06727049255371093939;
                        }
                      } else {
                        sum += (double)-4.173437010936248193;
                      }
                    } else {
                      sum += (double)-0.9449979354220199301;
                    }
                  }
                }
              } else {
                sum += (double)1.282317937653640216;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)502.0000000000000568) ) ) {
                sum += (double)-4.001170592154226213;
              } else {
                if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
                  sum += (double)0.628831973942843403;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1098.000000000000227) ) ) {
                    sum += (double)-1.157977397918701135;
                  } else {
                    sum += (double)-3.186260022615131859;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)194.5000000000000284) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-25.99999999999999645) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)168.5000000000000284) ) ) {
                sum += (double)-1.116057691333095958;
              } else {
                sum += (double)-2.410621503373267416;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1502.000000000000227) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)65.50000000000001421) ) ) {
                  sum += (double)0.3375784957618044313;
                } else {
                  sum += (double)-0.79138281175274372;
                }
              } else {
                sum += (double)-2.294040896017340181;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2034.000000000000227) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1402.000000000000227) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)863.5000000000001137) ) ) {
                  sum += (double)-0.5961169699194032168;
                } else {
                  sum += (double)-1.940429979083181822;
                }
              } else {
                sum += (double)-4.20292078930398727;
              }
            } else {
              sum += (double)0.8018938596432025889;
            }
          }
        }
      } else {
        sum += (double)2.003361129760742099;
      }
    } else {
      sum += (double)0.001180720392848260986;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-617.9999999999998863) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)113.5000000000000142) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01106415000000000176) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)40.50000000000000711) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008412265000000000367) ) ) {
              sum += (double)1.239310869963272888;
            } else {
              sum += (double)4.894553165435791442;
            }
          } else {
            sum += (double)0.4418501969605889146;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01310225000000000105) ) ) {
            sum += (double)3.598798209374104218;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01333370000000000215) ) ) {
              sum += (double)-2.151997410167347358;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01537025000000000197) ) ) {
                sum += (double)3.438447737693786976;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01545895000000000082) ) ) {
                  sum += (double)-3.34976825714111337;
                } else {
                  sum += (double)0.9486484527587890625;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)440.5000000000000568) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)364.5000000000000568) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3633.999999999999545) ) ) {
              sum += (double)-0.5048223631722587035;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1689.999999999999773) ) ) {
                sum += (double)3.499529696445839111;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)130.5000000000000284) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-869.9999999999998863) ) ) {
                    sum += (double)1.537190262476603175;
                  } else {
                    sum += (double)5.219822756449381984;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)138.5000000000000284) ) ) {
                    sum += (double)-1.303684216453915745;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)289.5000000000000568) ) ) {
                      sum += (double)1.776038349036014541;
                    } else {
                      sum += (double)-0.1104214111963908035;
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)4.544231301766854969;
          }
        } else {
          sum += (double)0.3841912514822823921;
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)152.5000000000000284) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007976505000000001788) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)45.50000000000000711) ) ) {
            sum += (double)0.611015236896017333;
          } else {
            sum += (double)4.478224895311438303;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01340995000000000208) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01273305000000000096) ) ) {
              sum += (double)1.798426506970379979;
            } else {
              sum += (double)-0.776023705800374386;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01404605000000000263) ) ) {
              sum += (double)5.535558319091797408;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)80.50000000000001421) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)26.50000000000000355) ) ) {
                  sum += (double)3.881610584259033381;
                } else {
                  sum += (double)1.398785318855110926;
                }
              } else {
                sum += (double)3.756160810517101822;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008889115000000001252) ) ) {
          sum += (double)-0.3363300038275318093;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01980560000000000306) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)235.5000000000000284) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-353.9999999999999432) ) ) {
                sum += (double)-0.9217358424745758505;
              } else {
                sum += (double)2.518629145218154619;
              }
            } else {
              sum += (double)3.375405675714666653;
            }
          } else {
            sum += (double)0.4841281328703228026;
          }
        }
      }
    }
  } else {
    sum += (double)-0.003854637138507472586;
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-617.9999999999998863) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5221.999999999999091) ) ) {
        sum += (double)3.373954507076379006;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)452.5000000000000568) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)113.5000000000000142) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)40.50000000000000711) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)36.50000000000000711) ) ) {
                sum += (double)1.442650969954561546;
              } else {
                sum += (double)4.087601155820100196;
              }
            } else {
              sum += (double)0.788737878824601446;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3633.999999999999545) ) ) {
              sum += (double)-1.013598160516648194;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1773.999999999999773) ) ) {
                sum += (double)3.622943344116210884;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)130.5000000000000284) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-869.9999999999998863) ) ) {
                    sum += (double)1.790759595235188684;
                  } else {
                    sum += (double)4.958831545511881878;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-777.9999999999998863) ) ) {
                    sum += (double)1.713727595745871746;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)261.5000000000000568) ) ) {
                      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)166.5000000000000284) ) ) {
                        sum += (double)-2.608309841156005948;
                      } else {
                        sum += (double)3.528756425438857924;
                      }
                    } else {
                      sum += (double)-2.623416725794474491;
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)0.1331566291126778656;
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)152.5000000000000284) ) ) {
        sum += (double)2.017985978436893202;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)235.5000000000000284) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-257.9999999999999432) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)174.5000000000000284) ) ) {
              sum += (double)-2.951795005798340199;
            } else {
              sum += (double)0.02226534111555232565;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)192.5000000000000284) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)354.0000000000000568) ) ) {
                sum += (double)4.624699442727225218;
              } else {
                sum += (double)0.8018083572387695313;
              }
            } else {
              sum += (double)-0.4967473553073022408;
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-297.9999999999999432) ) ) {
            sum += (double)2.682935254714068574;
          } else {
            sum += (double)0.9520291740829880389;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)50.50000000000000711) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-301.9999999999999432) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)26.50000000000000355) ) ) {
              sum += (double)-1.269673970166374843;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-401.9999999999999432) ) ) {
                sum += (double)-2.426635100251885113;
              } else {
                sum += (double)-4.780755985144412357;
              }
            }
          } else {
            sum += (double)-1.328225195228874611;
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-517.9999999999998863) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-565.9999999999998863) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)59.50000000000000711) ) ) {
                sum += (double)-3.75850406415534799;
              } else {
                sum += (double)-1.077969084035881764;
              }
            } else {
              sum += (double)-3.725562472965406879;
            }
          } else {
            sum += (double)-0.8024115530183140166;
          }
        }
      } else {
        sum += (double)1.537682021004813215;
      }
    } else {
      sum += (double)0.001316342540001117899;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01936015000000000305) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)194.5000000000000284) ) ) {
        sum += (double)-4.930952848706926517;
      } else {
        sum += (double)-1.748319515815148328;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)25.50000000000000355) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)98.00000000000001421) ) ) {
          sum += (double)-4.055346984863281712;
        } else {
          sum += (double)-1.267319497608003331;
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1105.999999999999773) ) ) {
          sum += (double)-2.651449629839729205;
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-797.9999999999998863) ) ) {
            sum += (double)2.180349531627836512;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)611.5000000000001137) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03246165000000000855) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)199.5000000000000284) ) ) {
                  sum += (double)-3.046433353424072621;
                } else {
                  sum += (double)1.16551661491394043;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)54.00000000000000711) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)277.5000000000000568) ) ) {
                    sum += (double)-1.386451435089111506;
                  } else {
                    sum += (double)0.3933367233276367503;
                  }
                } else {
                  sum += (double)1.009689268411374519;
                }
              }
            } else {
              sum += (double)-2.32326219081878671;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-417.9999999999999432) ) ) {
        sum += (double)0.3646882438836492879;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01348340000000000129) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)101.5000000000000142) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01333370000000000215) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)334.0000000000000568) ) ) {
                sum += (double)-0.1442342935498915346;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)57.50000000000000711) ) ) {
                  sum += (double)-2.025591657275245705;
                } else {
                  sum += (double)0.005218803445706192597;
                }
              }
            } else {
              sum += (double)-3.678068860371908055;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01017715000000000113) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-297.9999999999999432) ) ) {
                sum += (double)-0.1398586521977963626;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)122.5000000000000142) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)119.5000000000000142) ) ) {
                    sum += (double)-2.461101131439209055;
                  } else {
                    sum += (double)-6.264292182922363672;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)128.5000000000000284) ) ) {
                    sum += (double)1.629525128532858691;
                  } else {
                    sum += (double)-1.459498172336154642;
                  }
                }
              }
            } else {
              sum += (double)-0.149726044278447129;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01413270000000000151) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)146.5000000000000284) ) ) {
              sum += (double)0.1735136439291279087;
            } else {
              sum += (double)2.860971378750271299;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09930445000000000244) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)22.00000000000000355) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)61.50000000000000711) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-81.99999999999998579) ) ) {
                    sum += (double)-1.029289443276145244;
                  } else {
                    sum += (double)-3.897726253753013292;
                  }
                } else {
                  sum += (double)-0.298089450172015602;
                }
              } else {
                sum += (double)0.1036124216399577913;
              }
            } else {
              sum += (double)1.064496217833625025;
            }
          }
        }
      }
    } else {
      sum += (double)0.001250525398255512496;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-617.9999999999998863) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5221.999999999999091) ) ) {
        sum += (double)3.187022284305457198;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)452.5000000000000568) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)113.5000000000000142) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)40.50000000000000711) ) ) {
              sum += (double)1.753618409898545893;
            } else {
              sum += (double)0.7310665764720585269;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3633.999999999999545) ) ) {
              sum += (double)-0.9811526343936013417;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1773.999999999999773) ) ) {
                sum += (double)3.423561814960681016;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)130.5000000000000284) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-869.9999999999998863) ) ) {
                    sum += (double)1.682987191942002969;
                  } else {
                    sum += (double)4.692655563354492188;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-777.9999999999998863) ) ) {
                    sum += (double)1.609806786547499202;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)261.5000000000000568) ) ) {
                      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)166.5000000000000284) ) ) {
                        sum += (double)-2.496128749847412287;
                      } else {
                        sum += (double)3.334084236331102957;
                      }
                    } else {
                      sum += (double)-2.510480244954427231;
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)0.1082644051652613681;
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)152.5000000000000284) ) ) {
        sum += (double)1.929564163388585163;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)235.5000000000000284) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-257.9999999999999432) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)174.5000000000000284) ) ) {
              sum += (double)-2.816090615590413293;
            } else {
              sum += (double)0.02110607235930686901;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)192.5000000000000284) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)354.0000000000000568) ) ) {
                sum += (double)4.419551876613072139;
              } else {
                sum += (double)0.7814437866210938166;
              }
            } else {
              sum += (double)-0.4275539521248110097;
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-297.9999999999999432) ) ) {
            sum += (double)2.538095623839135229;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-201.9999999999999716) ) ) {
              sum += (double)-1.2403717041015625;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)304.5000000000000568) ) ) {
                sum += (double)3.751121125397858691;
              } else {
                sum += (double)0.674231248972367303;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)50.50000000000000711) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-301.9999999999999432) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)26.50000000000000355) ) ) {
              sum += (double)-1.164410582710714959;
            } else {
              sum += (double)-2.88047657012939462;
            }
          } else {
            sum += (double)-1.226962097271068863;
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-517.9999999999998863) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)55.50000000000000711) ) ) {
              sum += (double)-4.825749187469482671;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-565.9999999999998863) ) ) {
                sum += (double)-1.062415137121936137;
              } else {
                sum += (double)-3.298878470334139834;
              }
            }
          } else {
            sum += (double)-0.7479832200669117581;
          }
        }
      } else {
        sum += (double)1.44772539956229096;
      }
    } else {
      sum += (double)0.001187999162107138823;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)440.5000000000000568) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)364.5000000000000568) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9934955000000000869) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)80.50000000000001421) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9413910000000001999) ) ) {
              sum += (double)-1.198490402221679796;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01302835000000000278) ) ) {
                sum += (double)1.06806789895762555;
              } else {
                sum += (double)4.255969292776925705;
              }
            }
          } else {
            sum += (double)5.232600218674232195;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03382110000000001365) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)40.50000000000000711) ) ) {
              sum += (double)2.002736684654940813;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009738155000000000075) ) ) {
                sum += (double)1.034825347126394179;
              } else {
                sum += (double)1.510175526402858237;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03761775000000001229) ) ) {
              sum += (double)-1.756930267333984608;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04467245000000000937) ) ) {
                sum += (double)3.14886376517159583;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08740230000000001609) ) ) {
                  sum += (double)-0.8553660219365900597;
                } else {
                  sum += (double)1.722643019023694322;
                }
              }
            }
          }
        }
      } else {
        sum += (double)3.633460268766983692;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02533720000000000416) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01922215000000000382) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)564.5000000000001137) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01038445000000000167) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007617155000000001321) ) ) {
                sum += (double)1.751366733369373208;
              } else {
                sum += (double)-2.413073401357613612;
              }
            } else {
              sum += (double)2.011101237210360715;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01118725000000000101) ) ) {
              sum += (double)3.652284883771624191;
            } else {
              sum += (double)0.7059348947861615597;
            }
          }
        } else {
          sum += (double)-2.269557906642104772;
        }
      } else {
        sum += (double)2.291326628790961717;
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02653065000000000284) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008486020000000002103) ) ) {
            sum += (double)-1.541530666862017007;
          } else {
            if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)188.5000000000000284) ) ) {
                sum += (double)-3.799555738582167663;
              } else {
                sum += (double)-0.3669597714446312109;
              }
            } else {
              sum += (double)-0.8991231236548730132;
            }
          }
        } else {
          sum += (double)2.301454910278320387;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)83.50000000000001421) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1575440000000000451) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03164430000000000714) ) ) {
              sum += (double)0.02407904730902778179;
            } else {
              sum += (double)-3.053767997026443748;
            }
          } else {
            sum += (double)0.1456982759328988852;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)783.5000000000001137) ) ) {
            sum += (double)0.2660233441601509985;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05321745000000000642) ) ) {
              sum += (double)-3.726303733478892877;
            } else {
              sum += (double)-0.281367425918579106;
            }
          }
        }
      }
    } else {
      sum += (double)0.001128599194064407868;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.006115895000000000532) ) ) {
      sum += (double)3.245482687048010018;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)837.5000000000001137) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)440.5000000000000568) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02707275000000000306) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)223.5000000000000284) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-429.9999999999999432) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)113.5000000000000142) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)54.50000000000000711) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01614810000000000204) ) ) {
                      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007864580000000001223) ) ) {
                        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1049.999999999999773) ) ) {
                          sum += (double)-1.682468185424804918;
                        } else {
                          sum += (double)2.199289093017578356;
                        }
                      } else {
                        sum += (double)2.666660201078081105;
                      }
                    } else {
                      sum += (double)-0.04552830204819188764;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-469.9999999999999432) ) ) {
                      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01634985000000000258) ) ) {
                        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01537025000000000197) ) ) {
                          sum += (double)0.7249951896886297487;
                        } else {
                          sum += (double)-2.610863265991211435;
                        }
                      } else {
                        sum += (double)1.731992666537945258;
                      }
                    } else {
                      sum += (double)-2.500164104643322283;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)119.5000000000000142) ) ) {
                    sum += (double)3.743654281616211055;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01266265000000000272) ) ) {
                      sum += (double)0.9483192035546725851;
                    } else {
                      sum += (double)2.540370685032435905;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)194.5000000000000284) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007976505000000001788) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)55.50000000000000711) ) ) {
                      sum += (double)1.191771011352539267;
                    } else {
                      sum += (double)4.381718617565226737;
                    }
                  } else {
                    sum += (double)1.646720298834606799;
                  }
                } else {
                  sum += (double)-0.8101633071899414507;
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1773.999999999999773) ) ) {
                sum += (double)4.512461866181472381;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009445230000000000639) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)247.5000000000000284) ) ) {
                    sum += (double)5.235764980316162109;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008412265000000000367) ) ) {
                      sum += (double)1.696428002251519018;
                    } else {
                      sum += (double)-0.7979729683168472754;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01202925000000000175) ) ) {
                    sum += (double)4.415198666708810116;
                  } else {
                    sum += (double)1.769132648370205008;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)148.5000000000000284) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)63.50000000000000711) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04467245000000000937) ) ) {
                  sum += (double)-1.499451405661446746;
                } else {
                  sum += (double)1.413792687875253362;
                }
              } else {
                sum += (double)3.293583501771438993;
              }
            } else {
              sum += (double)-1.470172048715444824;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03530790000000001011) ) ) {
            sum += (double)-0.2706170609122828252;
          } else {
            sum += (double)2.582572384538321941;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1333.500000000000227) ) ) {
          sum += (double)4.130115693615329597;
        } else {
          sum += (double)0.438206214904785174;
        }
      }
    }
  } else {
    sum += (double)-0.003634553000688548179;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01980560000000000306) ) ) {
      sum += (double)-3.708150505065918257;
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2389.999999999999545) ) ) {
        sum += (double)-3.015647183931791098;
      } else {
        sum += (double)-0.308684302435980884;
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-469.9999999999999432) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1145.999999999999773) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)45.50000000000000711) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1313.999999999999773) ) ) {
              sum += (double)1.067178698667546;
            } else {
              sum += (double)4.81189689636230522;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)115.5000000000000142) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1221.999999999999773) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)109.5000000000000142) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0132556500000000025) ) ) {
                    sum += (double)0.8844032890608221065;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01545895000000000082) ) ) {
                      sum += (double)-2.527700861488900941;
                    } else {
                      sum += (double)0.3507328948974609562;
                    }
                  }
                } else {
                  sum += (double)-1.626249381823417384;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)68.50000000000001421) ) ) {
                  sum += (double)-4.141736640930175462;
                } else {
                  sum += (double)-0.1552086701264252522;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)122.5000000000000142) ) ) {
                sum += (double)2.943046059479584642;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1193.999999999999773) ) ) {
                  sum += (double)0.5483965409572587602;
                } else {
                  sum += (double)3.190445668880756092;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)22.50000000000000355) ) ) {
            sum += (double)-2.170230873263612192;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.50000000000000711) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.50000000000000711) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01396535000000000137) ) ) {
                  sum += (double)-1.267438012582284612;
                } else {
                  sum += (double)2.957998975118001361;
                }
              } else {
                sum += (double)4.360652687436058272;
              }
            } else {
              sum += (double)0.1348529711808308662;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04982810000000000711) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009738155000000000075) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)158.5000000000000284) ) ) {
              sum += (double)-0.4320460203848621727;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)398.0000000000000568) ) ) {
                sum += (double)-1.107666205840149853;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)926.0000000000001137) ) ) {
                  sum += (double)-4.736745550118240722;
                } else {
                  sum += (double)-0.8682189203077748108;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)124.5000000000000142) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-289.9999999999999432) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0106018000000000015) ) ) {
                  sum += (double)1.43240065941443806;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9999980000000000535) ) ) {
                    sum += (double)1.301851151206276702;
                  } else {
                    sum += (double)-2.055222684233935837;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-245.9999999999999716) ) ) {
                  sum += (double)1.981035217872032961;
                } else {
                  sum += (double)-0.5513233438930614794;
                }
              }
            } else {
              sum += (double)0.008931522752771425822;
            }
          }
        } else {
          sum += (double)0.6193777013633211537;
        }
      }
    } else {
      sum += (double)0.001252520381221416436;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.006115895000000000532) ) ) {
      sum += (double)3.064066046637457852;
    } else {
      sum += (double)1.227069674787473641;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02487190000000000581) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009738155000000000075) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)90.50000000000001421) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9888735000000000719) ) ) {
                sum += (double)1.988177314171424293;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)51.50000000000000711) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008486020000000002103) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00807545500000000048) ) ) {
                      sum += (double)-1.720201461259708964;
                    } else {
                      sum += (double)-4.046128253936767116;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00876145500000000306) ) ) {
                      sum += (double)1.13520554436577692;
                    } else {
                      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)30.50000000000000355) ) ) {
                        sum += (double)-4.096904490544246435;
                      } else {
                        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)42.50000000000000711) ) ) {
                          sum += (double)0.5022439080315667104;
                        } else {
                          sum += (double)-2.822528986777028681;
                        }
                      }
                    }
                  }
                } else {
                  sum += (double)-0.6735301831017243002;
                }
              }
            } else {
              sum += (double)-1.739100014558639273;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)148.5000000000000284) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0216873000000000031) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8830370000000001829) ) ) {
                  sum += (double)-3.488843022860013576;
                } else {
                  sum += (double)-1.051156384512094366;
                }
              } else {
                sum += (double)-3.076045219103495487;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0165670500000000033) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01517625000000000224) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01310225000000000105) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)348.5000000000000568) ) ) {
                      sum += (double)-0.3617968410352536135;
                    } else {
                      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)659.5000000000001137) ) ) {
                        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01202925000000000175) ) ) {
                          sum += (double)-3.775850931803385269;
                        } else {
                          sum += (double)-0.3443928718566894864;
                        }
                      } else {
                        sum += (double)-0.7179307120186941837;
                      }
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01404605000000000263) ) ) {
                      sum += (double)1.343660673182061505;
                    } else {
                      sum += (double)-0.5248292215754476464;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)220.5000000000000284) ) ) {
                    sum += (double)-5.399410685786494746;
                  } else {
                    sum += (double)-2.379645557029574476;
                  }
                }
              } else {
                sum += (double)0.007956487078999364276;
              }
            }
          }
        } else {
          sum += (double)1.803042519610861039;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)20.50000000000000355) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07886890000000000567) ) ) {
            sum += (double)-4.766642125447591916;
          } else {
            sum += (double)-1.134788976931104587;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)783.5000000000001137) ) ) {
              sum += (double)-0.007252228816712363857;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)863.5000000000001137) ) ) {
                sum += (double)-4.619093885421753143;
              } else {
                sum += (double)-0.5723317702611286917;
              }
            }
          } else {
            sum += (double)3.318372148786272735;
          }
        }
      }
    } else {
      sum += (double)0.001189894357216122068;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01980560000000000306) ) ) {
      sum += (double)-3.485981475830078224;
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2389.999999999999545) ) ) {
        sum += (double)-2.857997116675743854;
      } else {
        sum += (double)-0.2814565112098815214;
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-469.9999999999999432) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1145.999999999999773) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)45.50000000000000711) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1313.999999999999773) ) ) {
              sum += (double)0.9714424015320454187;
            } else {
              sum += (double)4.496221687680199253;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)115.5000000000000142) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1221.999999999999773) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)72.50000000000001421) ) ) {
                  sum += (double)0.9255416617209082375;
                } else {
                  sum += (double)-0.2219051729399582618;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)68.50000000000001421) ) ) {
                  sum += (double)-3.984453144073486275;
                } else {
                  sum += (double)-0.1570192182386243862;
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1369.999999999999773) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0091254550000000028) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00807545500000000048) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)466.5000000000000568) ) ) {
                      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1689.999999999999773) ) ) {
                        sum += (double)3.631503258982012206;
                      } else {
                        sum += (double)0.559092140197753884;
                      }
                    } else {
                      sum += (double)-0.9669219970703125666;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1601.999999999999773) ) ) {
                      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2853.999999999999545) ) ) {
                        sum += (double)-3.207094123840332323;
                      } else {
                        sum += (double)0.858784386771065833;
                      }
                    } else {
                      sum += (double)-4.149958336871603315;
                    }
                  }
                } else {
                  sum += (double)0.8362544091972146099;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)160.5000000000000284) ) ) {
                  sum += (double)3.552551672799246774;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)197.5000000000000284) ) ) {
                    sum += (double)-1.71293502807617215;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01634985000000000258) ) ) {
                      sum += (double)3.108430732727050838;
                    } else {
                      sum += (double)-0.3803481429815292469;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)22.50000000000000355) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)15.50000000000000178) ) ) {
              sum += (double)-0.5048081817626953738;
            } else {
              sum += (double)-3.683813158671060961;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.50000000000000711) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.50000000000000711) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01396535000000000137) ) ) {
                  sum += (double)-1.230353532014069939;
                } else {
                  sum += (double)2.777474419275919981;
                }
              } else {
                sum += (double)4.095480401175363383;
              }
            } else {
              sum += (double)0.1150428930270373518;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04982810000000000711) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)47.50000000000000711) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02733575000000000241) ) ) {
              sum += (double)-0.7343639368314115456;
            } else {
              sum += (double)-3.76907718658447255;
            }
          } else {
            sum += (double)-0.3709174767305681852;
          }
        } else {
          sum += (double)0.5976481920076629484;
        }
      }
    } else {
      sum += (double)0.00113039964344866981;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01980560000000000306) ) ) {
      sum += (double)-3.311682403564453647;
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2389.999999999999545) ) ) {
        sum += (double)-2.715097412696251933;
      } else {
        sum += (double)-0.2673836933620392098;
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-469.9999999999999432) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)416.5000000000000568) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-965.9999999999998863) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)304.5000000000000568) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)16.50000000000000355) ) ) {
                sum += (double)-1.829055222221042998;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)41.50000000000000711) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01614810000000000204) ) ) {
                    sum += (double)3.228666723691500096;
                  } else {
                    sum += (double)0.5271747234255769188;
                  }
                } else {
                  sum += (double)0.4036915831876923821;
                }
              }
            } else {
              sum += (double)2.102746502802922191;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-909.9999999999998863) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)71.50000000000001421) ) ) {
                sum += (double)-3.679628869761591758;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01143785000000000114) ) ) {
                  sum += (double)0.8749425070626396517;
                } else {
                  sum += (double)-2.180043771992559165;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01340995000000000208) ) ) {
                sum += (double)-0.02501036382168367322;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0149967500000000014) ) ) {
                  sum += (double)2.574268623987833848;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)136.5000000000000284) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)108.5000000000000142) ) ) {
                      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-517.9999999999998863) ) ) {
                        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-841.9999999999998863) ) ) {
                          sum += (double)2.875975170135498082;
                        } else {
                          sum += (double)-0.3043495061207402985;
                        }
                      } else {
                        sum += (double)2.622747802734375355;
                      }
                    } else {
                      sum += (double)2.831555743217468279;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-597.9999999999998863) ) ) {
                      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-701.9999999999998863) ) ) {
                        sum += (double)-1.000668306061715862;
                      } else {
                        sum += (double)1.663054131016586723;
                      }
                    } else {
                      sum += (double)-3.247513116200765104;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-713.9999999999998863) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-869.9999999999998863) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02557070000000000523) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)659.5000000000001137) ) ) {
                  sum += (double)-1.304458485880205743;
                } else {
                  sum += (double)1.102772175638299323;
                }
              } else {
                sum += (double)1.461983280181884837;
              }
            } else {
              sum += (double)-4.504788614355999421;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01118725000000000101) ) ) {
              sum += (double)2.8652937066966091;
            } else {
              sum += (double)-0.03992427732886338204;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04982810000000000711) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009738155000000000075) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)158.5000000000000284) ) ) {
              sum += (double)-0.3557099556700469289;
            } else {
              sum += (double)-1.361545583134504689;
            }
          } else {
            sum += (double)-0.2997530996157668493;
          }
        } else {
          sum += (double)0.5677657699685986215;
        }
      }
    } else {
      sum += (double)0.001073879668567500646;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-205.9999999999999716) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-217.9999999999999716) ) ) {
        sum += (double)0.931273105333177309;
      } else {
        sum += (double)-2.088084163665771431;
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-197.9999999999999716) ) ) {
        sum += (double)4.538453660692487901;
      } else {
        sum += (double)1.523265494717402246;
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01317555000000000288) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007102530000000000995) ) ) {
          sum += (double)-1.963847604804082936;
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-397.9999999999999432) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-405.9999999999999432) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-485.9999999999999432) ) ) {
                sum += (double)-1.401462203409613805;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0106018000000000015) ) ) {
                  sum += (double)2.065084075927734464;
                } else {
                  sum += (double)-1.624481565302068553;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01077555000000000179) ) ) {
                sum += (double)-1.612622909545898597;
              } else {
                sum += (double)-4.92055191532258096;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)302.0000000000000568) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008170265000000001207) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00807545500000000048) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007301295000000000181) ) ) {
                    sum += (double)0.9351148203799599656;
                  } else {
                    sum += (double)-1.251734731462266659;
                  }
                } else {
                  sum += (double)-4.054798571268717566;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)254.0000000000000284) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-265.9999999999999432) ) ) {
                    sum += (double)0.1010740235377925178;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-161.9999999999999716) ) ) {
                      sum += (double)-1.581019665092550319;
                    } else {
                      sum += (double)-0.4887087390351747551;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009590715000000001392) ) ) {
                    sum += (double)-0.6430896563407703104;
                  } else {
                    sum += (double)2.046885122332656959;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)758.0000000000001137) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)598.0000000000001137) ) ) {
                  sum += (double)-1.718794830828481501;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01002745000000000199) ) ) {
                    sum += (double)-4.772692894935608443;
                  } else {
                    sum += (double)-1.61283553550983294;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00807545500000000048) ) ) {
                  sum += (double)1.623342248667841492;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1270.000000000000227) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009394535000000000732) ) ) {
                      sum += (double)1.548397858078415457;
                    } else {
                      sum += (double)-1.28376451110839862;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009289325000000002788) ) ) {
                      sum += (double)-3.791999138726128482;
                    } else {
                      sum += (double)-1.414407057713980675;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05533510000000000512) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01421345000000000074) ) ) {
            sum += (double)0.02667786398051697622;
          } else {
            sum += (double)-0.7577831683357071357;
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4233.999999999999091) ) ) {
            sum += (double)-2.979788171677362651;
          } else {
            sum += (double)0.1139731976106993089;
          }
        }
      }
    } else {
      sum += (double)0.001018813492928734429;
    }
  }
  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-533.9999999999998863) ) ) {
      if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
        sum += (double)-1.281740208968375594;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9232610000000001094) ) ) {
          sum += (double)-2.110401433706283747;
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7835.999999999999091) ) ) {
            sum += (double)2.349661616621346649;
          } else {
            sum += (double)0.183623968281877159;
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-517.9999999999998863) ) ) {
        sum += (double)-2.768476936144706357;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007102530000000000995) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)48.50000000000000711) ) ) {
            sum += (double)-3.489855145185421836;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)102.5000000000000142) ) ) {
              sum += (double)0.4749126502445766285;
            } else {
              sum += (double)-1.520569190979004004;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6381820000000001381) ) ) {
            sum += (double)-2.846570711135864684;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01310225000000000105) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)101.5000000000000142) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007301295000000000181) ) ) {
                  sum += (double)2.36380343967013884;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007467930000000001095) ) ) {
                    sum += (double)-2.55135750089372948;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)97.50000000000001421) ) ) {
                      sum += (double)-0.1893325295919333351;
                    } else {
                      sum += (double)1.808897298574447809;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)122.5000000000000142) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)119.5000000000000142) ) ) {
                    sum += (double)-1.204418291648229111;
                  } else {
                    sum += (double)-3.544536190032959055;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)162.5000000000000284) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-201.9999999999999716) ) ) {
                      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01077555000000000179) ) ) {
                        sum += (double)0.6530049884130084692;
                      } else {
                        sum += (double)-4.148981072562081707;
                      }
                    } else {
                      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)148.5000000000000284) ) ) {
                        sum += (double)0.1586736785699121854;
                      } else {
                        sum += (double)2.362407329164702308;
                      }
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)314.0000000000000568) ) ) {
                      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008889115000000001252) ) ) {
                        sum += (double)-1.38016575515539941;
                      } else {
                        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01251765000000000343) ) ) {
                          sum += (double)0.2477259479351897886;
                        } else {
                          sum += (double)-2.761324375697544742;
                        }
                      }
                    } else {
                      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)192.5000000000000284) ) ) {
                        sum += (double)-5.407781457901001509;
                      } else {
                        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009788405000000001757) ) ) {
                          sum += (double)-2.983872737306537459;
                        } else {
                          sum += (double)-0.160359014164317748;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-441.9999999999999432) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02421650000000000538) ) ) {
                  sum += (double)2.28674359321594256;
                } else {
                  sum += (double)-1.036486245393753114;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)86.50000000000001421) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-205.9999999999999716) ) ) {
                    sum += (double)-1.626793578011648922;
                  } else {
                    sum += (double)-0.2866680182678273403;
                  }
                } else {
                  sum += (double)0.1183928903443681735;
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)0.0009678728242881860398;
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    sum += (double)1.016417254754939492;
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01317555000000000288) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)106.5000000000000142) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007102530000000000995) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)77.50000000000001421) ) ) {
              sum += (double)-2.90381897481282536;
            } else {
              sum += (double)-0.5030075400216239556;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007301295000000000181) ) ) {
              sum += (double)2.191042772928873728;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)104.5000000000000142) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0104385000000000016) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00825941000000000175) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007976505000000001788) ) ) {
                      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007864580000000001223) ) ) {
                        sum += (double)-1.324274381001790513;
                      } else {
                        sum += (double)1.889062763082570262;
                      }
                    } else {
                      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)76.50000000000001421) ) ) {
                        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)58.50000000000000711) ) ) {
                          sum += (double)-2.694451016965119905;
                        } else {
                          sum += (double)0.6296638488769531472;
                        }
                      } else {
                        sum += (double)-4.469895328174938065;
                      }
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)20.50000000000000355) ) ) {
                      sum += (double)2.392930661714994134;
                    } else {
                      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)44.50000000000000711) ) ) {
                        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009788405000000001757) ) ) {
                          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)34.50000000000000711) ) ) {
                            sum += (double)0.4533295704768254275;
                          } else {
                            sum += (double)-2.822284562247140194;
                          }
                        } else {
                          sum += (double)-4.655835247039795455;
                        }
                      } else {
                        sum += (double)-0.1013852658479110214;
                      }
                    }
                  }
                } else {
                  sum += (double)-1.139752668373997579;
                }
              } else {
                sum += (double)2.249526119232177823;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009989275000000000584) ) ) {
            sum += (double)-1.552561421045443035;
          } else {
            sum += (double)-0.9424837455749511816;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)124.5000000000000142) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.348122000000000098) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01733255000000000559) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01490555000000000178) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01455465000000000057) ) ) {
                  sum += (double)-0.6640709655229435349;
                } else {
                  sum += (double)-3.191018540518624658;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)98.50000000000001421) ) ) {
                  sum += (double)0.3383415730794270826;
                } else {
                  sum += (double)-2.063522675458122624;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)115.5000000000000142) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)77.50000000000001421) ) ) {
                  sum += (double)-1.607722710365027119;
                } else {
                  sum += (double)-0.5683474874496460272;
                }
              } else {
                sum += (double)-3.770809223033763757;
              }
            }
          } else {
            sum += (double)0.8465890208880106904;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0165670500000000033) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01517625000000000224) ) ) {
              sum += (double)0.2987673335050413104;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)148.5000000000000284) ) ) {
                sum += (double)0.293528254278774936;
              } else {
                sum += (double)-3.280801191329956179;
              }
            }
          } else {
            sum += (double)0.1125458663182634517;
          }
        }
      }
    } else {
      sum += (double)0.0009194791675412536131;
    }
  }
  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-533.9999999999998863) ) ) {
      if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1049.999999999999773) ) ) {
          sum += (double)-2.269027638435364036;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-777.9999999999998863) ) ) {
            sum += (double)0.8853873171125139496;
          } else {
            sum += (double)-2.202664470672607511;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9232610000000001094) ) ) {
          sum += (double)-2.01630463898181933;
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7835.999999999999091) ) ) {
            sum += (double)2.197405012722673412;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9865920000000001355) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01112785000000000163) ) ) {
                sum += (double)-0.4681846618652343861;
              } else {
                sum += (double)3.766641790970512105;
              }
            } else {
              sum += (double)0.1314983593088083769;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-517.9999999999998863) ) ) {
        sum += (double)-2.631848173875075414;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007102530000000000995) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)48.50000000000000711) ) ) {
            sum += (double)-3.215404901749048694;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)102.5000000000000142) ) ) {
              sum += (double)0.5163406099591937304;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-101.9999999999999858) ) ) {
                sum += (double)-0.5304696175359910892;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)174.5000000000000284) ) ) {
                  sum += (double)-4.762152779620627108;
                } else {
                  sum += (double)-0.4608131561279297239;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6381820000000001381) ) ) {
            sum += (double)-2.684334297180175799;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8469900000000000206) ) ) {
              sum += (double)1.715298889423238826;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01310225000000000105) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)101.5000000000000142) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007301295000000000181) ) ) {
                    sum += (double)2.097744385855538685;
                  } else {
                    sum += (double)-0.1452337560330303756;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)122.5000000000000142) ) ) {
                    sum += (double)-1.525088563729158242;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)162.5000000000000284) ) ) {
                      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-201.9999999999999716) ) ) {
                        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01077555000000000179) ) ) {
                          sum += (double)0.6022665454495337301;
                        } else {
                          sum += (double)-3.927989011492047933;
                        }
                      } else {
                        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)148.5000000000000284) ) ) {
                          sum += (double)0.1968652002559685699;
                        } else {
                          sum += (double)2.277872815625421321;
                        }
                      }
                    } else {
                      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)314.0000000000000568) ) ) {
                        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008889115000000001252) ) ) {
                          sum += (double)-1.275139845234074087;
                        } else {
                          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01251765000000000343) ) ) {
                            sum += (double)0.2617968559265136941;
                          } else {
                            sum += (double)-2.604118276323591274;
                          }
                        }
                      } else {
                        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)192.5000000000000284) ) ) {
                          sum += (double)-5.0964244365692144;
                        } else {
                          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009788405000000001757) ) ) {
                            sum += (double)-2.794028698314320103;
                          } else {
                            sum += (double)-0.1265103101730346846;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-0.06825422742219836025;
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)0.0008735052250917393077;
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9930435000000000789) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)80.50000000000001421) ) ) {
        sum += (double)0.7328036057321649643;
      } else {
        sum += (double)4.042457681543687009;
      }
    } else {
      sum += (double)0.9344804693559446429;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02509105000000000363) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008170265000000001207) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00807545500000000048) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)90.50000000000001421) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007102530000000000995) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)77.50000000000001421) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)64.50000000000001421) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.006561365000000000426) ) ) {
                      sum += (double)0.2146988677978515503;
                    } else {
                      sum += (double)-3.204960715770721613;
                    }
                  } else {
                    sum += (double)-4.547224028214164271;
                  }
                } else {
                  sum += (double)1.030391002836681613;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007301295000000000181) ) ) {
                  sum += (double)2.143124037981033236;
                } else {
                  sum += (double)-0.3848019191196986877;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)99.50000000000001421) ) ) {
                sum += (double)-3.677111800511678297;
              } else {
                sum += (double)-1.390700333027900193;
              }
            }
          } else {
            sum += (double)-2.919848897901632157;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)564.5000000000001137) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)440.5000000000000568) ) ) {
              sum += (double)-0.7612848642442687774;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01259295000000000206) ) ) {
                sum += (double)-3.950603848411923025;
              } else {
                sum += (double)-1.406449579309534181;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)863.5000000000001137) ) ) {
              sum += (double)0.7384616549052890333;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01273305000000000096) ) ) {
                sum += (double)-2.991160796670353061;
              } else {
                sum += (double)0.8207490682601928933;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)20.50000000000000355) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07251305000000000944) ) ) {
            sum += (double)-4.670360465671705263;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)13.50000000000000178) ) ) {
              sum += (double)-0.04130751869895241818;
            } else {
              sum += (double)-2.827594831715459556;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)123.5000000000000142) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02946700000000000361) ) ) {
                sum += (double)0.6448469445512101661;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.348122000000000098) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)69.50000000000001421) ) ) {
                    sum += (double)-3.000593020552296153;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)98.50000000000001421) ) ) {
                      sum += (double)-0.2374021360609266385;
                    } else {
                      sum += (double)-2.639043433325631405;
                    }
                  }
                } else {
                  sum += (double)0.8003957584500313027;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)759.5000000000001137) ) ) {
                sum += (double)0.2104377457489796654;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)863.5000000000001137) ) ) {
                  sum += (double)-3.7369384765625;
                } else {
                  sum += (double)0.08376757523109173986;
                }
              }
            }
          } else {
            sum += (double)1.947162875007180549;
          }
        }
      }
    } else {
      sum += (double)0.0008298299502394491109;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02850055000000000296) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)90.00000000000001421) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-485.9999999999999432) ) ) {
          sum += (double)-1.931101902111156621;
        } else {
          sum += (double)0.9073940074805056932;
        }
      } else {
        sum += (double)-4.301228581304135545;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)25.50000000000000355) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)254.0000000000000284) ) ) {
          sum += (double)-3.087817064921061672;
        } else {
          sum += (double)-0.4477036190032959162;
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1017.999999999999886) ) ) {
          sum += (double)-1.384476456275353096;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)186.5000000000000284) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03957025000000000819) ) ) {
              sum += (double)2.494740898132324247;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)51.50000000000000711) ) ) {
                sum += (double)1.41386325447647665;
              } else {
                sum += (double)-0.009958510398864747065;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04191690000000000693) ) ) {
              sum += (double)-1.085483994203455316;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)309.5000000000000568) ) ) {
                sum += (double)-1.349552599589030066;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)535.5000000000001137) ) ) {
                  sum += (double)1.1398484282060104;
                } else {
                  sum += (double)0.08994709650675455914;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-997.9999999999998863) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)16.50000000000000355) ) ) {
          sum += (double)-1.767638435363769522;
        } else {
          sum += (double)0.4497161339587114615;
        }
      } else {
        sum += (double)0.0008345113609080761228;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01302835000000000278) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)158.5000000000000284) ) ) {
            sum += (double)-0.1069873571993842643;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008826590000000002212) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008486020000000002103) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)273.5000000000000568) ) ) {
                  sum += (double)-1.549736231211069626;
                } else {
                  sum += (double)0.2236163600391110062;
                }
              } else {
                sum += (double)-2.339470955495084326;
              }
            } else {
              sum += (double)-0.1991482525405546822;
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-909.9999999999998863) ) ) {
            sum += (double)-2.017345371246337837;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)92.50000000000001421) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1402.000000000000227) ) ) {
                sum += (double)-0.1057010508912266666;
              } else {
                sum += (double)-2.409119110107422301;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)273.5000000000000568) ) ) {
                sum += (double)0.6670724650758402818;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04982810000000000711) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01922215000000000382) ) ) {
                    sum += (double)0.3870842863610908791;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)321.5000000000000568) ) ) {
                      sum += (double)-3.033121726626442083;
                    } else {
                      sum += (double)-0.4992900986141628472;
                    }
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-149.9999999999999716) ) ) {
                    sum += (double)3.312325827280680368;
                  } else {
                    sum += (double)0.3935704656938712187;
                  }
                }
              }
            }
          }
        }
      } else {
        sum += (double)0.0007848898658287111222;
      }
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-201.9999999999999716) ) ) {
      sum += (double)0.9453876662096440953;
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-177.9999999999999716) ) ) {
        sum += (double)3.595895034191655792;
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-101.9999999999999858) ) ) {
          sum += (double)-0.1048887252807617215;
        } else {
          sum += (double)1.56999781311408082;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-277.9999999999999432) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04191690000000000693) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03126565000000001288) ) ) {
            sum += (double)-0.9945153758294941193;
          } else {
            sum += (double)-2.42790682928902779;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)197.5000000000000284) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1881085000000000396) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07886890000000000567) ) ) {
                sum += (double)-1.521466673574140005;
              } else {
                sum += (double)1.19723891478318456;
              }
            } else {
              sum += (double)-2.572073677966469241;
            }
          } else {
            sum += (double)0.7693950220689935726;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01280645000000000221) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)302.0000000000000568) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-41.99999999999999289) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)493.5000000000000568) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-77.99999999999998579) ) ) {
                  sum += (double)-0.5559200686160649107;
                } else {
                  sum += (double)-3.559731435775757014;
                }
              } else {
                sum += (double)-4.398927606855120409;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008486020000000002103) ) ) {
                sum += (double)-0.9571442434720904835;
              } else {
                sum += (double)0.1382400527893309639;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01245045000000000179) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)54.50000000000000711) ) ) {
                sum += (double)-2.145496645078554199;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2142.000000000000455) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01038445000000000167) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1350.000000000000227) ) ) {
                      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)74.50000000000001421) ) ) {
                        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)510.0000000000000568) ) ) {
                          sum += (double)-1.670528507232666104;
                        } else {
                          sum += (double)2.742644790649414244;
                        }
                      } else {
                        sum += (double)-1.637715385786069122;
                      }
                    } else {
                      sum += (double)-5.434930783226376683;
                    }
                  } else {
                    sum += (double)0.05485041528685480339;
                  }
                } else {
                  sum += (double)1.482395291328430176;
                }
              }
            } else {
              sum += (double)-4.182608612723972996;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)129.5000000000000284) ) ) {
            sum += (double)-0.4977342159260629284;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)299.5000000000000568) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0165670500000000033) ) ) {
                sum += (double)-0.08402010046917460229;
              } else {
                sum += (double)1.085305883111180369;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05140305000000000568) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)580.5000000000001137) ) ) {
                  sum += (double)-1.534422572092576598;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)783.5000000000001137) ) ) {
                    sum += (double)1.660898474852244178;
                  } else {
                    sum += (double)-1.121737016950334898;
                  }
                }
              } else {
                sum += (double)0.5174365026680262103;
              }
            }
          }
        }
      }
    } else {
      sum += (double)0.0007501248682260486895;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-201.9999999999999716) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)837.5000000000001137) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1881085000000000396) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009339625000000002439) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)75.50000000000001421) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)66.50000000000001421) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-409.9999999999999432) ) ) {
                  sum += (double)0.7076925404866537539;
                } else {
                  sum += (double)2.945600340101454329;
                }
              } else {
                sum += (double)3.593972533089774046;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)83.50000000000001421) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-897.9999999999998863) ) ) {
                  sum += (double)0.05833273800936612796;
                } else {
                  sum += (double)-4.405673381260463373;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)98.50000000000001421) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-841.9999999999998863) ) ) {
                    sum += (double)0.8313478933798301718;
                  } else {
                    sum += (double)4.054176893688383743;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3633.999999999999545) ) ) {
                    sum += (double)-2.37196293706479322;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1537.999999999999773) ) ) {
                      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)176.5000000000000284) ) ) {
                        sum += (double)0.7019553740819295395;
                      } else {
                        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)269.5000000000000568) ) ) {
                          sum += (double)4.94957780104417111;
                        } else {
                          sum += (double)1.258453929424286022;
                        }
                      }
                    } else {
                      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)507.5000000000000568) ) ) {
                        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009069620000000002194) ) ) {
                          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)112.5000000000000142) ) ) {
                            sum += (double)-1.852939193313186239;
                          } else {
                            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-713.9999999999998863) ) ) {
                              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008486020000000002103) ) ) {
                                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008170265000000001207) ) ) {
                                  sum += (double)1.517113160498348323;
                                } else {
                                  sum += (double)-1.602508678436279199;
                                }
                              } else {
                                sum += (double)3.986746899834995084;
                              }
                            } else {
                              sum += (double)-0.5471381548538948314;
                            }
                          }
                        } else {
                          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009179275000000002363) ) ) {
                            sum += (double)-3.239345862648704166;
                          } else {
                            sum += (double)0.1700884611710258287;
                          }
                        }
                      } else {
                        sum += (double)-2.436156264595363385;
                      }
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)36.50000000000000711) ) ) {
              sum += (double)0.1822692167674396235;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)52.50000000000000711) ) ) {
                sum += (double)2.673365201621220155;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)84.50000000000001421) ) ) {
                  sum += (double)0.4436262540168163238;
                } else {
                  sum += (double)1.288200183559108591;
                }
              }
            }
          }
        } else {
          sum += (double)-1.209273387767650476;
        }
      } else {
        sum += (double)2.819968448985706644;
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-177.9999999999999716) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)110.5000000000000142) ) ) {
          sum += (double)5.032432261380282768;
        } else {
          sum += (double)2.189917426273740642;
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-101.9999999999999858) ) ) {
          sum += (double)-0.09964429069967831176;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1690.000000000000227) ) ) {
            sum += (double)1.671841813895786011;
          } else {
            sum += (double)0.1451375961303711104;
          }
        }
      }
    }
  } else {
    sum += (double)-0.002191876742589241988;
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    sum += (double)0.9694985262663469161;
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-205.9999999999999716) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-237.9999999999999716) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-277.9999999999999432) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)124.5000000000000142) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)113.5000000000000142) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01237795000000000041) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)82.50000000000001421) ) ) {
                      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01169590000000000039) ) ) {
                        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01131105000000000131) ) ) {
                          sum += (double)-1.072628030043381919;
                        } else {
                          sum += (double)-4.133122936884562115;
                        }
                      } else {
                        sum += (double)0.9112248872455798177;
                      }
                    } else {
                      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1145.999999999999773) ) ) {
                        sum += (double)-1.934146030970982144;
                      } else {
                        sum += (double)0.6165210294051909345;
                      }
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-353.9999999999999432) ) ) {
                      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-501.9999999999999432) ) ) {
                        sum += (double)-1.923422930344291348;
                      } else {
                        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-497.9999999999999432) ) ) {
                          sum += (double)3.276794533107591612;
                        } else {
                          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)46.50000000000000711) ) ) {
                            sum += (double)1.610217899746364978;
                          } else {
                            sum += (double)-1.850394653907189157;
                          }
                        }
                      }
                    } else {
                      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)66.50000000000001421) ) ) {
                        sum += (double)-4.643479807236615464;
                      } else {
                        sum += (double)-1.296354629054214058;
                      }
                    }
                  }
                } else {
                  sum += (double)-2.98275701597139431;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01223965000000000122) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-549.9999999999998863) ) ) {
                    sum += (double)-1.762116819593641637;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009590715000000001392) ) ) {
                      sum += (double)0.40489439505117919;
                    } else {
                      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-305.9999999999999432) ) ) {
                        sum += (double)-2.806018093654087942;
                      } else {
                        sum += (double)0.4845632221387780603;
                      }
                    }
                  }
                } else {
                  sum += (double)-0.1058382476935406935;
                }
              }
            } else {
              sum += (double)1.393210957731519484;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01645640000000000297) ) ) {
              sum += (double)-4.066005624307169164;
            } else {
              sum += (double)-0.7759277648925781978;
            }
          }
        } else {
          sum += (double)1.339170837402343883;
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008412265000000000367) ) ) {
          sum += (double)-1.007429253901534816;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)16.50000000000000355) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)538.0000000000001137) ) ) {
              sum += (double)-3.628065621852874845;
            } else {
              sum += (double)0.1898719711303711033;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05140305000000000568) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)954.0000000000001137) ) ) {
                sum += (double)-0.2289752817912231453;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)98.50000000000001421) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01049225000000000158) ) ) {
                    sum += (double)-0.3713028377956814619;
                  } else {
                    sum += (double)-3.168821182733849717;
                  }
                } else {
                  sum += (double)-0.19864447367125454;
                }
              }
            } else {
              sum += (double)0.5140212738022434946;
            }
          }
        }
      }
    } else {
      sum += (double)0.0008222124477273041326;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01266265000000000272) ) ) {
      sum += (double)-2.506362108083871831;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)25.50000000000000355) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)254.0000000000000284) ) ) {
          sum += (double)-2.776409799081307916;
        } else {
          sum += (double)-0.4051331710815430087;
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02819210000000000119) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-237.9999999999999716) ) ) {
            sum += (double)1.088914198345608098;
          } else {
            sum += (double)-3.561367469363742266;
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1017.999999999999886) ) ) {
            sum += (double)-1.269063289348895784;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)186.5000000000000284) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03957025000000000819) ) ) {
                sum += (double)2.415771896362304716;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)51.50000000000000711) ) ) {
                  sum += (double)1.343840272338302277;
                } else {
                  sum += (double)0.01198863983154296875;
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-301.9999999999999432) ) ) {
                sum += (double)-1.147302224900987433;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)466.5000000000000568) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)294.5000000000000568) ) ) {
                    sum += (double)1.349478581547737255;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)364.5000000000000568) ) ) {
                      sum += (double)-0.5681688535781134197;
                    } else {
                      sum += (double)0.8513457171122233991;
                    }
                  }
                } else {
                  sum += (double)-0.8921962768800798527;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-997.9999999999998863) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)16.50000000000000355) ) ) {
          sum += (double)-1.711110229492187607;
        } else {
          sum += (double)0.3575754668143165116;
        }
      } else {
        sum += (double)0.0008237627633602860253;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01302835000000000278) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)158.5000000000000284) ) ) {
            sum += (double)-0.1020484370768433291;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008826590000000002212) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008486020000000002103) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)273.5000000000000568) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-105.9999999999999858) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)247.5000000000000284) ) ) {
                      sum += (double)-0.2152384719848632888;
                    } else {
                      sum += (double)-2.897815372632897457;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)235.5000000000000284) ) ) {
                      sum += (double)-4.158567946297782036;
                    } else {
                      sum += (double)-0.3949244308471679954;
                    }
                  }
                } else {
                  sum += (double)0.2532778215724111326;
                }
              } else {
                sum += (double)-2.249557002206866496;
              }
            } else {
              sum += (double)-0.1962046655534117889;
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-909.9999999999998863) ) ) {
            sum += (double)-1.935555682182312331;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)70.50000000000001421) ) ) {
              sum += (double)-0.2661253135451170926;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01429695000000000098) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-217.9999999999999716) ) ) {
                  sum += (double)2.874815805875337915;
                } else {
                  sum += (double)0.3581870005680964919;
                }
              } else {
                sum += (double)0.1752287863690942804;
              }
            }
          }
        }
      } else {
        sum += (double)0.0007766223454891774472;
      }
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-417.9999999999999432) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-533.9999999999998863) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-565.9999999999998863) ) ) {
          sum += (double)0.698868962220063672;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)59.50000000000000711) ) ) {
            sum += (double)-0.004395548502604166609;
          } else {
            sum += (double)3.756684112548828391;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)55.50000000000000711) ) ) {
          sum += (double)1.558308099445543826;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)202.5000000000000284) ) ) {
            sum += (double)-1.297987595383001791;
          } else {
            sum += (double)0.9595869064331055132;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9999980000000000535) ) ) {
        sum += (double)4.110707157679966528;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)99.50000000000001421) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1842.000000000000227) ) ) {
            sum += (double)1.683166631062825491;
          } else {
            sum += (double)-0.7670917129516601207;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)125.5000000000000142) ) ) {
            sum += (double)-0.3740748807608363369;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)146.5000000000000284) ) ) {
              sum += (double)2.969994521141052335;
            } else {
              sum += (double)0.7820427866077106493;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-517.9999999999998863) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)180.5000000000000284) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2853.999999999999545) ) ) {
              sum += (double)-3.020920512987220086;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-697.9999999999998863) ) ) {
                sum += (double)-0.8729552437793248743;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)71.50000000000001421) ) ) {
                  sum += (double)-2.933997093421825575;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)85.50000000000001421) ) ) {
                    sum += (double)1.470113876887730209;
                  } else {
                    sum += (double)-1.991574378723794059;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)356.5000000000000568) ) ) {
              sum += (double)0.03645602107511883988;
            } else {
              sum += (double)-1.339866288708102537;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)122.5000000000000142) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)102.5000000000000142) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)386.0000000000000568) ) ) {
                if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
                  sum += (double)-3.495059967041015625;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)40.50000000000000711) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)33.50000000000000711) ) ) {
                      sum += (double)-0.2393749910757082544;
                    } else {
                      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-257.9999999999999432) ) ) {
                        sum += (double)-4.410941480553669081;
                      } else {
                        sum += (double)-1.619126212887647798;
                      }
                    }
                  } else {
                    sum += (double)-0.1742872491033210514;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)410.0000000000000568) ) ) {
                  sum += (double)-3.151367098093032837;
                } else {
                  sum += (double)-0.8247947377616196007;
                }
              }
            } else {
              sum += (double)-1.694462981259912571;
            }
          } else {
            sum += (double)-0.3121287363662495484;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)70.50000000000001421) ) ) {
          sum += (double)-0.310408306121826183;
        } else {
          sum += (double)2.480648565292358665;
        }
      }
    } else {
      sum += (double)0.0007424979883006318192;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-417.9999999999999432) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007467930000000001095) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007301295000000000181) ) ) {
          sum += (double)0.1819987968162254111;
        } else {
          sum += (double)-1.883767434053642775;
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00774926000000000087) ) ) {
          sum += (double)2.394013297341086588;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-549.9999999999998863) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-565.9999999999998863) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-597.9999999999998863) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-617.9999999999998863) ) ) {
                  sum += (double)0.7084386469671399844;
                } else {
                  sum += (double)2.403829905192057304;
                }
              } else {
                sum += (double)-1.052592806134905024;
              }
            } else {
              sum += (double)3.811040893554687337;
            }
          } else {
            sum += (double)-0.08419108192125956958;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9999980000000000535) ) ) {
        sum += (double)3.905171770368303985;
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1562.000000000000227) ) ) {
          sum += (double)1.222485808412474562;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2426.000000000000455) ) ) {
            sum += (double)-1.878150851909930807;
          } else {
            sum += (double)1.485046797532301843;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05533510000000000512) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-517.9999999999998863) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03700630000000000586) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03246165000000000855) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0091254550000000028) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1481.999999999999773) ) ) {
                  sum += (double)-2.601385902635978908;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1049.999999999999773) ) ) {
                    sum += (double)0.5946048889160157058;
                  } else {
                    sum += (double)-1.894439965707284346;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01446935000000000061) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1017.999999999999886) ) ) {
                    sum += (double)0.269407865590062634;
                  } else {
                    sum += (double)-0.9406857732027896768;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01555560000000000102) ) ) {
                    sum += (double)-4.138012042045593475;
                  } else {
                    sum += (double)-0.9747123936366608454;
                  }
                }
              }
            } else {
              sum += (double)-4.270706968307495188;
            }
          } else {
            sum += (double)0.7988762077532317596;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008170265000000001207) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00807545500000000048) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-429.9999999999999432) ) ) {
                sum += (double)1.346683645248413219;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)954.0000000000001137) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)402.0000000000000568) ) ) {
                    sum += (double)-0.8960478500366270138;
                  } else {
                    sum += (double)-2.475523786544799876;
                  }
                } else {
                  sum += (double)1.534717922210693475;
                }
              }
            } else {
              sum += (double)-3.174628925323486506;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008338595000000002463) ) ) {
              sum += (double)0.8777347890342155345;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008486020000000002103) ) ) {
                sum += (double)-1.648913767717886891;
              } else {
                sum += (double)-0.4413938366890248766;
              }
            }
          }
        }
      } else {
        sum += (double)0.1352043864210365209;
      }
    } else {
      sum += (double)0.0007053730730631449682;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-417.9999999999999432) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007467930000000001095) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007301295000000000181) ) ) {
          sum += (double)0.1728989236148787134;
        } else {
          sum += (double)-1.789579134209211553;
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00774926000000000087) ) ) {
          sum += (double)2.274312647039240076;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-549.9999999999998863) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-565.9999999999998863) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-597.9999999999998863) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-617.9999999999998863) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)440.5000000000000568) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)364.5000000000000568) ) ) {
                      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)289.5000000000000568) ) ) {
                        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)265.5000000000000568) ) ) {
                          sum += (double)0.7032381984212837667;
                        } else {
                          sum += (double)3.077909237997872527;
                        }
                      } else {
                        sum += (double)-0.7483073305200647063;
                      }
                    } else {
                      sum += (double)3.715523411677434051;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008696525000000001823) ) ) {
                      sum += (double)-2.592232052485148319;
                    } else {
                      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1193.999999999999773) ) ) {
                        sum += (double)1.29009268188476578;
                      } else {
                        sum += (double)-1.058642208214962244;
                      }
                    }
                  }
                } else {
                  sum += (double)2.283638432820638275;
                }
              } else {
                sum += (double)-0.9999631718226842381;
              }
            } else {
              sum += (double)3.620488922119140973;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)202.5000000000000284) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)72.50000000000001421) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)42.50000000000000711) ) ) {
                  sum += (double)-1.419313510258992661;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)54.50000000000000711) ) ) {
                    sum += (double)4.174363670349121591;
                  } else {
                    sum += (double)0.1376326833452497234;
                  }
                }
              } else {
                sum += (double)-2.027631269918905854;
              }
            } else {
              sum += (double)1.769800136400305979;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9999980000000000535) ) ) {
        sum += (double)3.709913210187639532;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)99.50000000000001421) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)89.50000000000001421) ) ) {
            sum += (double)1.282788119514297609;
          } else {
            sum += (double)2.830974520807680861;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01012445000000000185) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009445230000000000639) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-237.9999999999999716) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)232.5000000000000284) ) ) {
                  sum += (double)0.9300807595252991167;
                } else {
                  sum += (double)-3.374808484857732882;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)398.0000000000000568) ) ) {
                  sum += (double)2.155667975142195214;
                } else {
                  sum += (double)-0.7760019155649038325;
                }
              }
            } else {
              sum += (double)-3.043785082060715297;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01980560000000000306) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01584075000000000413) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-297.9999999999999432) ) ) {
                  sum += (double)3.038410377502441584;
                } else {
                  sum += (double)0.9554727281842914088;
                }
              } else {
                sum += (double)3.67717216491699217;
              }
            } else {
              sum += (double)0.03519691467285156888;
            }
          }
        }
      }
    }
  } else {
    sum += (double)-0.001902675775898703299;
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-417.9999999999999432) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007467930000000001095) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)124.5000000000000142) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)107.5000000000000142) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007301295000000000181) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)66.50000000000001421) ) ) {
                sum += (double)-0.48461449940999346;
              } else {
                sum += (double)2.829130622318812627;
              }
            } else {
              sum += (double)-2.245706812540690489;
            }
          } else {
            sum += (double)-3.106386418496409174;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)188.5000000000000284) ) ) {
            sum += (double)3.539565623890269741;
          } else {
            sum += (double)-0.361969201461128598;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00774926000000000087) ) ) {
          sum += (double)2.160597055608576067;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-549.9999999999998863) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-565.9999999999998863) ) ) {
              sum += (double)0.6640276766505953665;
            } else {
              sum += (double)3.439464477539062592;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)202.5000000000000284) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)72.50000000000001421) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)42.50000000000000711) ) ) {
                  sum += (double)-1.348347822825114006;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)54.50000000000000711) ) ) {
                    sum += (double)3.965645427703857973;
                  } else {
                    sum += (double)0.1307510920933314669;
                  }
                }
              } else {
                sum += (double)-1.926249761839170738;
              }
            } else {
              sum += (double)1.681310114653214116;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9999980000000000535) ) ) {
        sum += (double)3.524417550223214679;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)99.50000000000001421) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1842.000000000000227) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)870.0000000000001137) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00807545500000000048) ) ) {
                sum += (double)2.70858041479227829;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00825941000000000175) ) ) {
                  sum += (double)-1.167741460385529839;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)86.50000000000001421) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009069620000000002194) ) ) {
                      sum += (double)3.407902579471982829;
                    } else {
                      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01355995000000000117) ) ) {
                        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01012445000000000185) ) ) {
                          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)54.50000000000000711) ) ) {
                            sum += (double)3.500899305797758654;
                          } else {
                            sum += (double)-0.08990675608317057199;
                          }
                        } else {
                          sum += (double)-0.3342929191589355531;
                        }
                      } else {
                        sum += (double)1.536012457018700816;
                      }
                    }
                  } else {
                    sum += (double)3.00977092835961324;
                  }
                }
              }
            } else {
              sum += (double)3.073445428384317335;
            }
          } else {
            sum += (double)-0.7998649597167969416;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)125.5000000000000142) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01295795000000000106) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008486020000000002103) ) ) {
                sum += (double)1.430604062761579254;
              } else {
                sum += (double)-3.354951342414407733;
              }
            } else {
              sum += (double)1.624963460649762936;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)146.5000000000000284) ) ) {
              sum += (double)2.701446914672851918;
            } else {
              sum += (double)0.6602729835383520651;
            }
          }
        }
      }
    }
  } else {
    sum += (double)-0.001807541985150585857;
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-417.9999999999999432) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007467930000000001095) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)124.5000000000000142) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)107.5000000000000142) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007301295000000000181) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)66.50000000000001421) ) ) {
                sum += (double)-0.4603839000066121123;
              } else {
                sum += (double)2.687674168178013634;
              }
            } else {
              sum += (double)-2.133421452840169152;
            }
          } else {
            sum += (double)-2.951067130796371174;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)188.5000000000000284) ) ) {
            sum += (double)3.362587304548783962;
          } else {
            sum += (double)-0.343870718582816759;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00774926000000000087) ) ) {
          sum += (double)2.052567166415128153;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-549.9999999999998863) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-565.9999999999998863) ) ) {
              sum += (double)0.6308262910173308979;
            } else {
              sum += (double)3.26749128723144544;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)202.5000000000000284) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)72.50000000000001421) ) ) {
                sum += (double)0.6678182019127740787;
              } else {
                sum += (double)-1.829937275035961264;
              }
            } else {
              sum += (double)1.597244594408118168;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)99.50000000000001421) ) ) {
        sum += (double)1.407207030132724634;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01012445000000000185) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009445230000000000639) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-237.9999999999999716) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)232.5000000000000284) ) ) {
                sum += (double)0.8006851087297711667;
              } else {
                sum += (double)-3.239081798900258047;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)398.0000000000000568) ) ) {
                sum += (double)2.065737884521484435;
              } else {
                sum += (double)-0.7747887097872221407;
              }
            }
          } else {
            sum += (double)-2.865939331054687678;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01980560000000000306) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01584075000000000413) ) ) {
              sum += (double)1.433647731939951653;
            } else {
              sum += (double)3.478955374823676561;
            }
          } else {
            sum += (double)0.02501904687216115544;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05533510000000000512) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-517.9999999999998863) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03700630000000000586) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03246165000000000855) ) ) {
              sum += (double)-1.022989626743333824;
            } else {
              sum += (double)-4.056986074447631374;
            }
          } else {
            sum += (double)0.7591179069719817818;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
            sum += (double)-0.4895480304261203286;
          } else {
            sum += (double)1.226842367989676497;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)25.50000000000000355) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)3902.000000000000455) ) ) {
            if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
              sum += (double)-3.453851795196533292;
            } else {
              sum += (double)-0.5428398291269939113;
            }
          } else {
            sum += (double)1.06009549856185914;
          }
        } else {
          sum += (double)0.3906422135779763494;
        }
      }
    } else {
      sum += (double)0.0008556153268463054457;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)422.0000000000000568) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04695285000000001124) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03382110000000001365) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)17.50000000000000355) ) ) {
            sum += (double)-1.512538541158040317;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)659.5000000000001137) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)51.50000000000000711) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-701.9999999999998863) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-797.9999999999998863) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007976505000000001788) ) ) {
                      sum += (double)-1.667219319836847014;
                    } else {
                      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01614810000000000204) ) ) {
                        sum += (double)2.228629149399794951;
                      } else {
                        sum += (double)-0.7160565247406831535;
                      }
                    }
                  } else {
                    sum += (double)-3.324995206749957966;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00807545500000000048) ) ) {
                    sum += (double)4.03713030133928541;
                  } else {
                    sum += (double)1.422304134474274839;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)84.50000000000001421) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007976505000000001788) ) ) {
                    sum += (double)1.607585725118947595;
                  } else {
                    sum += (double)-0.2419310658955745597;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)88.50000000000001421) ) ) {
                    sum += (double)2.721727353473042399;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9999980000000000535) ) ) {
                      sum += (double)2.854927549691035793;
                    } else {
                      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009339625000000002439) ) ) {
                        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009235095000000000456) ) ) {
                          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)112.5000000000000142) ) ) {
                            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)105.5000000000000142) ) ) {
                              sum += (double)0.7587159773882697911;
                            } else {
                              sum += (double)-2.739127037741921455;
                            }
                          } else {
                            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)192.5000000000000284) ) ) {
                              sum += (double)1.43043978325674459;
                            } else {
                              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)220.5000000000000284) ) ) {
                                sum += (double)-2.595945280248468823;
                              } else {
                                sum += (double)0.4760243610669208092;
                              }
                            }
                          }
                        } else {
                          sum += (double)-1.739574790723396269;
                        }
                      } else {
                        sum += (double)0.8784238631755239002;
                      }
                    }
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-365.9999999999999432) ) ) {
                sum += (double)3.748509150537951751;
              } else {
                sum += (double)-0.5483152662004743272;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03585245000000000098) ) ) {
            sum += (double)-3.608162325904483492;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04281455000000000677) ) ) {
              sum += (double)0.3844277172553829947;
            } else {
              sum += (double)-3.670388889312744318;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)265.5000000000000568) ) ) {
          sum += (double)1.080876892332046868;
        } else {
          sum += (double)3.969419842674618337;
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)348.5000000000000568) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01118725000000000101) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)718.0000000000001137) ) ) {
            sum += (double)-1.479845371246337971;
          } else {
            sum += (double)1.857686004638672062;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)47.50000000000000711) ) ) {
            sum += (double)0.3433843803405762229;
          } else {
            sum += (double)3.385020781216556696;
          }
        }
      } else {
        sum += (double)-1.037232927175668618;
      }
    }
  } else {
    sum += (double)-0.001717265905708519188;
  }
  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8712640000000001494) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8404545000000001043) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)106.5000000000000142) ) ) {
          sum += (double)-2.29993856811523445;
        } else {
          sum += (double)0.494674556395586773;
        }
      } else {
        sum += (double)-3.47610836791992206;
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-797.9999999999998863) ) ) {
        sum += (double)0.1175001002513001158;
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-757.9999999999998863) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)72.50000000000001421) ) ) {
            sum += (double)-4.744570746788611793;
          } else {
            sum += (double)-0.09416220066911083764;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9203175000000001216) ) ) {
            sum += (double)1.644080364704132213;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-733.9999999999998863) ) ) {
              sum += (double)1.291760393778483174;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-701.9999999999998863) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)150.5000000000000284) ) ) {
                  sum += (double)-0.4327137381343518219;
                } else {
                  sum += (double)-3.285569107055664073;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)61.50000000000000711) ) ) {
                  sum += (double)-0.3828804121635295266;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01302835000000000278) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01251765000000000343) ) ) {
                      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)611.5000000000001137) ) ) {
                        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2826.000000000000455) ) ) {
                          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)103.5000000000000142) ) ) {
                            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008170265000000001207) ) ) {
                              sum += (double)-0.6106430910487863351;
                            } else {
                              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009445230000000000639) ) ) {
                                sum += (double)0.9494987417669857876;
                              } else {
                                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1350.000000000000227) ) ) {
                                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-245.9999999999999716) ) ) {
                                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01156380000000000081) ) ) {
                                      sum += (double)-0.1081417052976546833;
                                    } else {
                                      sum += (double)2.394183781272486655;
                                    }
                                  } else {
                                    sum += (double)-0.721169587383120092;
                                  }
                                } else {
                                  sum += (double)3.031372985839844159;
                                }
                              }
                            }
                          } else {
                            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1690.000000000000227) ) ) {
                              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)108.5000000000000142) ) ) {
                                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)106.5000000000000142) ) ) {
                                  sum += (double)-0.6960039832375266577;
                                } else {
                                  sum += (double)-3.94554984051248292;
                                }
                              } else {
                                sum += (double)-0.3711184110247158219;
                              }
                            } else {
                              sum += (double)-3.288732546851749206;
                            }
                          }
                        } else {
                          sum += (double)2.99400165557861353;
                        }
                      } else {
                        sum += (double)1.333807153140797341;
                      }
                    } else {
                      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-141.9999999999999716) ) ) {
                        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-321.9999999999999432) ) ) {
                          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)95.50000000000001421) ) ) {
                            sum += (double)-3.44509622573852603;
                          } else {
                            sum += (double)0.8794568435005519769;
                          }
                        } else {
                          sum += (double)-3.932186614142524128;
                        }
                      } else {
                        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)14.00000000000000178) ) ) {
                          sum += (double)2.476320700211958936;
                        } else {
                          sum += (double)-1.314907574123806544;
                        }
                      }
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01404605000000000263) ) ) {
                      sum += (double)1.147796091687079967;
                    } else {
                      sum += (double)-0.03909132530291875574;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    sum += (double)0.0008981096413668014818;
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)422.0000000000000568) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04695285000000001124) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03382110000000001365) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)17.50000000000000355) ) ) {
            sum += (double)-1.432234255472819129;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)51.50000000000000711) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-701.9999999999998863) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-797.9999999999998863) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007976505000000001788) ) ) {
                    sum += (double)-1.589733400015995501;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01614810000000000204) ) ) {
                      sum += (double)2.114462225777762328;
                    } else {
                      sum += (double)-0.6861286988129488007;
                    }
                  }
                } else {
                  sum += (double)-3.035873114544412665;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00807545500000000048) ) ) {
                  sum += (double)3.854417800903320313;
                } else {
                  sum += (double)1.372866020413393562;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)84.50000000000001421) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007976505000000001788) ) ) {
                  sum += (double)1.534872259095657832;
                } else {
                  sum += (double)-0.2270400946088832195;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)88.50000000000001421) ) ) {
                  sum += (double)2.574612692899482358;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009339625000000002439) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009235095000000000456) ) ) {
                      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)112.5000000000000142) ) ) {
                        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)105.5000000000000142) ) ) {
                          sum += (double)0.7874252374621405481;
                        } else {
                          sum += (double)-2.582676696777344016;
                        }
                      } else {
                        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)192.5000000000000284) ) ) {
                          sum += (double)1.408535534555461766;
                        } else {
                          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)220.5000000000000284) ) ) {
                            sum += (double)-2.466420563784512687;
                          } else {
                            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)247.5000000000000284) ) ) {
                              sum += (double)3.015362640380859549;
                            } else {
                              sum += (double)0.2295103240431400904;
                            }
                          }
                        }
                      }
                    } else {
                      sum += (double)-1.854012276144588744;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009493430000000002353) ) ) {
                      sum += (double)3.160806446690713312;
                    } else {
                      sum += (double)0.8441862393697102673;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04281455000000000677) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03761775000000001229) ) ) {
              sum += (double)-2.362381433185778423;
            } else {
              sum += (double)1.376405922571818152;
            }
          } else {
            sum += (double)-3.48765523910522468;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)265.5000000000000568) ) ) {
          sum += (double)1.035355280316065274;
        } else {
          sum += (double)3.778023238409133455;
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)348.5000000000000568) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01118725000000000101) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)718.0000000000001137) ) ) {
            sum += (double)-1.394705619812011799;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009069620000000002194) ) ) {
              sum += (double)3.147706863403320288;
            } else {
              sum += (double)0.7725770241873605171;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)47.50000000000000711) ) ) {
            sum += (double)0.3453591728210449463;
          } else {
            sum += (double)3.218059226258160876;
          }
        }
      } else {
        sum += (double)-0.9582706304696890776;
      }
    }
  } else {
    sum += (double)-0.001642478707840868985;
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)422.0000000000000568) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04695285000000001124) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03382110000000001365) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)17.50000000000000355) ) ) {
            sum += (double)-1.360622507731119812;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)659.5000000000001137) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)314.0000000000000568) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)198.0000000000000284) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-429.9999999999999432) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02653065000000000284) ) ) {
                      sum += (double)0.3821530035642902723;
                    } else {
                      sum += (double)2.312286822001139441;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007617155000000001321) ) ) {
                      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-209.9999999999999716) ) ) {
                        sum += (double)4.051951773961385506;
                      } else {
                        sum += (double)0.8053721237182618342;
                      }
                    } else {
                      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)54.00000000000000711) ) ) {
                        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)51.50000000000000711) ) ) {
                          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)46.50000000000000711) ) ) {
                            sum += (double)1.486090216765532546;
                          } else {
                            sum += (double)3.859290259225027775;
                          }
                        } else {
                          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009883615000000000109) ) ) {
                            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009493430000000002353) ) ) {
                              sum += (double)0.1858139605135531169;
                            } else {
                              sum += (double)-2.232135872218920181;
                            }
                          } else {
                            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)95.50000000000001421) ) ) {
                              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01781075000000000366) ) ) {
                                sum += (double)0.5801683719341571566;
                              } else {
                                sum += (double)-3.213576774597167951;
                              }
                            } else {
                              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01273305000000000096) ) ) {
                                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)156.5000000000000284) ) ) {
                                  sum += (double)4.948475785688920325;
                                } else {
                                  sum += (double)2.317651108772524005;
                                }
                              } else {
                                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-141.9999999999999716) ) ) {
                                  sum += (double)0.2934764430208026131;
                                } else {
                                  sum += (double)3.148111877441406747;
                                }
                              }
                            }
                          }
                        }
                      } else {
                        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)65.50000000000001421) ) ) {
                          sum += (double)-3.284709621611095809;
                        } else {
                          sum += (double)0.6547297477722168191;
                        }
                      }
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)262.0000000000000568) ) ) {
                    sum += (double)3.712123012542724698;
                  } else {
                    sum += (double)0.7298498153686523438;
                  }
                }
              } else {
                sum += (double)-1.421324972672896036;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-365.9999999999999432) ) ) {
                sum += (double)3.492064679902175506;
              } else {
                sum += (double)-0.5916988191150484022;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03585245000000000098) ) ) {
            sum += (double)-3.297777666364397398;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04281455000000000677) ) ) {
              sum += (double)0.3744736182980421546;
            } else {
              sum += (double)-3.313272457122802717;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)265.5000000000000568) ) ) {
          sum += (double)0.98358751932779942;
        } else {
          sum += (double)3.589122100103469659;
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009289325000000002788) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)97.50000000000001421) ) ) {
          sum += (double)1.492419277537952782;
        } else {
          sum += (double)-1.706041996295635688;
        }
      } else {
        sum += (double)1.930699569500045287;
      }
    }
  } else {
    sum += (double)-0.001560354750994474198;
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)422.0000000000000568) ) ) {
      sum += (double)0.47501259427863185;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)348.5000000000000568) ) ) {
        sum += (double)1.680553043784433598;
      } else {
        sum += (double)-0.9509422155526968679;
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)47.50000000000000711) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-101.9999999999999858) ) ) {
            sum += (double)-1.455443750900595301;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-89.99999999999998579) ) ) {
              sum += (double)3.596329895019531264;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)42.50000000000000711) ) ) {
                sum += (double)-0.681258696317668222;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)302.0000000000000568) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)78.00000000000001421) ) ) {
                    sum += (double)-2.724482653691218559;
                  } else {
                    sum += (double)0.5729111758145418731;
                  }
                } else {
                  sum += (double)-3.841503388793380491;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-205.9999999999999716) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)202.5000000000000284) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)142.5000000000000284) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)63.50000000000000711) ) ) {
                  sum += (double)-1.439107663107559887;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4233.999999999999091) ) ) {
                    sum += (double)-2.688277635120210451;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)136.5000000000000284) ) ) {
                      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)113.5000000000000142) ) ) {
                        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)108.5000000000000142) ) ) {
                          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-289.9999999999999432) ) ) {
                            sum += (double)-0.5958878670209720729;
                          } else {
                            sum += (double)1.343982685936821797;
                          }
                        } else {
                          sum += (double)1.142353369060315593;
                        }
                      } else {
                        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)115.5000000000000142) ) ) {
                          sum += (double)-4.441909226917085896;
                        } else {
                          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-305.9999999999999432) ) ) {
                            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-713.9999999999998863) ) ) {
                              sum += (double)-1.575794026726170749;
                            } else {
                              sum += (double)0.5556097380320230705;
                            }
                          } else {
                            sum += (double)-2.364300741468157163;
                          }
                        }
                      }
                    } else {
                      sum += (double)1.512383382216743843;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)154.5000000000000284) ) ) {
                  sum += (double)-3.071710504385141149;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-397.9999999999999432) ) ) {
                    sum += (double)-1.41673268595049473;
                  } else {
                    sum += (double)0.5302235313824245067;
                  }
                }
              }
            } else {
              sum += (double)-0.2313282167871391626;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9612275000000001235) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)106.5000000000000142) ) ) {
                sum += (double)-4.196514328002929339;
              } else {
                sum += (double)-0.3575947154651988869;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9999980000000000535) ) ) {
                sum += (double)1.825460209165300718;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-113.9999999999999858) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)76.50000000000001421) ) ) {
                    sum += (double)1.190026283264160156;
                  } else {
                    sum += (double)-0.2136966372595893171;
                  }
                } else {
                  sum += (double)-0.3510938446580025296;
                }
              }
            }
          }
        }
      } else {
        sum += (double)1.672329257516300238;
      }
    } else {
      sum += (double)0.001013345840771716702;
    }
  }
  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07886890000000000567) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)17.50000000000000355) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-217.9999999999999716) ) ) {
          sum += (double)-0.1975017793716923042;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0119618500000000013) ) ) {
            sum += (double)-0.7112416474715523851;
          } else {
            sum += (double)-4.186479556175970451;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)27.50000000000000355) ) ) {
          sum += (double)0.5587005631820015639;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)30.50000000000000355) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0169940500000000036) ) ) {
              sum += (double)-0.8371965737178408418;
            } else {
              sum += (double)-3.764879662649972758;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008557765000000001898) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1302.000000000000227) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-897.9999999999998863) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)507.5000000000000568) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)220.5000000000000284) ) ) {
                      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)98.50000000000001421) ) ) {
                        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)65.50000000000001421) ) ) {
                          sum += (double)-0.6330470403035481919;
                        } else {
                          sum += (double)2.298673499257941177;
                        }
                      } else {
                        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)112.5000000000000142) ) ) {
                          sum += (double)-2.939892607468825414;
                        } else {
                          sum += (double)-0.0997276429207094306;
                        }
                      }
                    } else {
                      sum += (double)2.916320185758630057;
                    }
                  } else {
                    sum += (double)-1.889749518500434267;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)479.5000000000000568) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)156.5000000000000284) ) ) {
                      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)136.5000000000000284) ) ) {
                        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-701.9999999999998863) ) ) {
                          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)84.50000000000001421) ) ) {
                            sum += (double)-4.026650187843724638;
                          } else {
                            sum += (double)-0.577416205406188987;
                          }
                        } else {
                          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)87.50000000000001421) ) ) {
                            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)65.50000000000001421) ) ) {
                              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00807545500000000048) ) ) {
                                sum += (double)0.2975924600690803556;
                              } else {
                                sum += (double)-1.373668205738067805;
                              }
                            } else {
                              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)68.50000000000001421) ) ) {
                                sum += (double)3.072697603380357911;
                              } else {
                                sum += (double)0.1224188371138139192;
                              }
                            }
                          } else {
                            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00807545500000000048) ) ) {
                              sum += (double)-1.725832014155567196;
                            } else {
                              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)98.50000000000001421) ) ) {
                                sum += (double)-2.015400930551382253;
                              } else {
                                sum += (double)1.076565558822066837;
                              }
                            }
                          }
                        }
                      } else {
                        sum += (double)1.624962188720703082;
                      }
                    } else {
                      sum += (double)-1.256913170004790636;
                    }
                  } else {
                    sum += (double)1.157326313487270442;
                  }
                }
              } else {
                sum += (double)-3.117827900973233479;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009069620000000002194) ) ) {
                sum += (double)0.393436905382208324;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009738155000000000075) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)41.50000000000000711) ) ) {
                    sum += (double)2.455477371215820437;
                  } else {
                    sum += (double)-0.7662653320637650145;
                  }
                } else {
                  sum += (double)-0.0720149269799265912;
                }
              }
            }
          }
        }
      }
    } else {
      sum += (double)0.4181367892543880749;
    }
  } else {
    sum += (double)0.0009648950719162093263;
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03382110000000001365) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)17.50000000000000355) ) ) {
        sum += (double)-1.543544466355241118;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02023995000000000308) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01980560000000000306) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-701.9999999999998863) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)134.5000000000000284) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)123.5000000000000142) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-897.9999999999998863) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01537025000000000197) ) ) {
                      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01106415000000000176) ) ) {
                        sum += (double)0.2578568613063023651;
                      } else {
                        sum += (double)1.755309393553607267;
                      }
                    } else {
                      sum += (double)-0.6500765564244822547;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008627505000000002325) ) ) {
                      sum += (double)-2.743630117299605597;
                    } else {
                      sum += (double)0.3753066351654332777;
                    }
                  }
                } else {
                  sum += (double)-1.721567652775691348;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00807545500000000048) ) ) {
                  sum += (double)2.143635578950246146;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)356.5000000000000568) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01137435000000000182) ) ) {
                      sum += (double)0.08052347640545048923;
                    } else {
                      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)178.5000000000000284) ) ) {
                        sum += (double)0.745523026410271239;
                      } else {
                        sum += (double)3.318473221705509957;
                      }
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1601.999999999999773) ) ) {
                      sum += (double)0.7044126033782959206;
                    } else {
                      sum += (double)-1.811954653465141618;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01831050000000000386) ) ) {
                sum += (double)0.6882338260468983115;
              } else {
                sum += (double)3.350674235820770619;
              }
            }
          } else {
            sum += (double)-2.933888951054326011;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)334.5000000000000568) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)273.5000000000000568) ) ) {
              sum += (double)1.314904423249073639;
            } else {
              sum += (double)-1.620419445037841744;
            }
          } else {
            sum += (double)3.585046824702510015;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04695285000000001124) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1105.999999999999773) ) ) {
          sum += (double)-3.424646514892577986;
        } else {
          sum += (double)-0.7488216824001736605;
        }
      } else {
        sum += (double)0.7937885614089024156;
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04028030000000000499) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-517.9999999999998863) ) ) {
          sum += (double)-1.040014311846564787;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008170265000000001207) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00807545500000000048) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)102.5000000000000142) ) ) {
                sum += (double)-0.07123748115871739173;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)138.5000000000000284) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00774926000000000087) ) ) {
                    sum += (double)-2.556129027575981372;
                  } else {
                    sum += (double)-6.176910667419433842;
                  }
                } else {
                  sum += (double)-0.5737139518002429828;
                }
              }
            } else {
              sum += (double)-2.796357640353116292;
            }
          } else {
            sum += (double)-0.3370457690159956998;
          }
        }
      } else {
        sum += (double)0.2342666613418047383;
      }
    } else {
      sum += (double)0.0009166503223206078944;
    }
  }
  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07886890000000000567) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)17.50000000000000355) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-217.9999999999999716) ) ) {
          sum += (double)-0.1520171319284746858;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0119618500000000013) ) ) {
            sum += (double)-0.6544257785962975804;
          } else {
            sum += (double)-3.960568631079889546;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)27.50000000000000355) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007976505000000001788) ) ) {
            sum += (double)2.013728320214056122;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01446935000000000061) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)22.50000000000000355) ) ) {
                sum += (double)0.920237638512436229;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)24.50000000000000355) ) ) {
                  sum += (double)-2.35130215348868532;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01150015000000000238) ) ) {
                    sum += (double)-1.090163652824633012;
                  } else {
                    sum += (double)1.984855766296386825;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0169940500000000036) ) ) {
                sum += (double)2.978020563992587189;
              } else {
                sum += (double)0.3200285040813943827;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)30.50000000000000355) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0169940500000000036) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-469.9999999999999432) ) ) {
                sum += (double)0.8702261352539063521;
              } else {
                sum += (double)-1.66939608925267291;
              }
            } else {
              sum += (double)-3.564638355800083591;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008627505000000002325) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1302.000000000000227) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)926.0000000000001137) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-897.9999999999998863) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1861.999999999999773) ) ) {
                      sum += (double)-0.8583172024704339709;
                    } else {
                      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007102530000000000995) ) ) {
                        sum += (double)1.920009645273987875;
                      } else {
                        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-937.9999999999998863) ) ) {
                          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1601.999999999999773) ) ) {
                            sum += (double)1.971180170232599727;
                          } else {
                            sum += (double)-0.5022608559086637614;
                          }
                        } else {
                          sum += (double)2.734448358286982295;
                        }
                      }
                    }
                  } else {
                    sum += (double)-0.5239049141155813771;
                  }
                } else {
                  sum += (double)2.239365699074485239;
                }
              } else {
                sum += (double)-3.036710341080375741;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009069620000000002194) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)582.0000000000001137) ) ) {
                  sum += (double)0.298769966841954282;
                } else {
                  sum += (double)2.303981799171084699;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009738155000000000075) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)41.50000000000000711) ) ) {
                    sum += (double)2.337758687337240016;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)47.50000000000000711) ) ) {
                      sum += (double)-3.287955900338980442;
                    } else {
                      sum += (double)-0.6176371294798450595;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)73.50000000000001421) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03585245000000000098) ) ) {
                      sum += (double)-0.2826173697484835046;
                    } else {
                      sum += (double)-2.520774665245642865;
                    }
                  } else {
                    sum += (double)0.05562713632194830199;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      sum += (double)0.3826619168325346987;
    }
  } else {
    sum += (double)0.0008708177904573652199;
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03382110000000001365) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02023995000000000308) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01980560000000000306) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-701.9999999999998863) ) ) {
            sum += (double)0.2896359213947379829;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01831050000000000386) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01781075000000000366) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01574235000000000564) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01472905000000000221) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01355995000000000117) ) ) {
                      sum += (double)0.5831488765476906533;
                    } else {
                      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-297.9999999999999432) ) ) {
                        sum += (double)4.797165878959324559;
                      } else {
                        sum += (double)-0.2676289978027343586;
                      }
                    }
                  } else {
                    sum += (double)-0.8571309574314804891;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0172195500000000036) ) ) {
                    sum += (double)3.306121666486873334;
                  } else {
                    sum += (double)0.3779385528564453423;
                  }
                }
              } else {
                sum += (double)-2.012715311050415234;
              }
            } else {
              sum += (double)3.187345123291015714;
            }
          }
        } else {
          sum += (double)-2.78545443216959665;
        }
      } else {
        sum += (double)1.25856045956881557;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04695285000000001124) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04191690000000000693) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03530790000000001011) ) ) {
            sum += (double)-2.513307538239852423;
          } else {
            sum += (double)0.1696531989357688286;
          }
        } else {
          sum += (double)-3.497086643037341958;
        }
      } else {
        sum += (double)0.759153243641794484;
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04028030000000000499) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-517.9999999999998863) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02102715000000000486) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01922215000000000382) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1537.999999999999773) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00774926000000000087) ) ) {
                  sum += (double)-3.882923248291016094;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009788405000000001757) ) ) {
                    sum += (double)-0.04455138872254570115;
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2085.999999999999545) ) ) {
                      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3197.999999999999545) ) ) {
                        sum += (double)-3.43024311065673837;
                      } else {
                        sum += (double)0.2864388235684098838;
                      }
                    } else {
                      sum += (double)-3.876173900735789601;
                    }
                  }
                }
              } else {
                sum += (double)-0.8746720184274272558;
              }
            } else {
              sum += (double)-2.948504447937011719;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02279410000000000117) ) ) {
              sum += (double)1.411252370793768751;
            } else {
              sum += (double)-0.9416519405605557891;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008170265000000001207) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00807545500000000048) ) ) {
              sum += (double)-0.6827381054734245058;
            } else {
              sum += (double)-2.630745020779696741;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03890825000000000533) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
                sum += (double)-0.315811770419104243;
              } else {
                sum += (double)2.43758090791248172;
              }
            } else {
              sum += (double)-2.228943487576076077;
            }
          }
        }
      } else {
        sum += (double)0.2155769441077543258;
      }
    } else {
      sum += (double)0.0008272769071882140344;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1421.500000000000227) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)178.5000000000000284) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-517.9999999999998863) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)160.5000000000000284) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-597.9999999999998863) ) ) {
              sum += (double)0.3541171024075855378;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)69.50000000000001421) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)50.50000000000000711) ) ) {
                  sum += (double)-0.002712703886486235449;
                } else {
                  sum += (double)-3.088047381809779779;
                }
              } else {
                sum += (double)0.6261888104815815925;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)172.5000000000000284) ) ) {
              sum += (double)-2.08921304819535214;
            } else {
              sum += (double)0.3653395175933837891;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)17.50000000000000355) ) ) {
            sum += (double)-1.644424919460131029;
          } else {
            sum += (double)0.6850890837942209544;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)186.5000000000000284) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1277.999999999999773) ) ) {
            sum += (double)3.979460834321521645;
          } else {
            sum += (double)0.4321551913306826975;
          }
        } else {
          sum += (double)0.6582422515324184431;
        }
      }
    } else {
      sum += (double)-1.635441684722900524;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-517.9999999999998863) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)188.5000000000000284) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)172.5000000000000284) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)70.50000000000001421) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)20.50000000000000355) ) ) {
                  sum += (double)0.5649482727050781916;
                } else {
                  sum += (double)-1.843035089673094706;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)85.50000000000001421) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1417.999999999999773) ) ) {
                    sum += (double)-1.33737152099609391;
                  } else {
                    sum += (double)1.020184936523437669;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)101.5000000000000142) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)96.50000000000001421) ) ) {
                      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)92.50000000000001421) ) ) {
                        sum += (double)-2.051950258197206445;
                      } else {
                        sum += (double)0.7306839863459270168;
                      }
                    } else {
                      sum += (double)-5.380779318376021081;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)106.5000000000000142) ) ) {
                      sum += (double)1.47602467536926274;
                    } else {
                      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)154.5000000000000284) ) ) {
                        sum += (double)-1.540459253559004926;
                      } else {
                        sum += (double)0.1273123124066521117;
                      }
                    }
                  }
                }
              }
            } else {
              sum += (double)-3.645988704312232542;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)348.5000000000000568) ) ) {
              sum += (double)0.09179413979794798228;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-841.9999999999998863) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)659.5000000000001137) ) ) {
                  sum += (double)-0.9915301197453549875;
                } else {
                  sum += (double)1.736334814344133726;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-677.9999999999998863) ) ) {
                  sum += (double)-3.705382553736368934;
                } else {
                  sum += (double)-0.5961719184086241574;
                }
              }
            }
          }
        } else {
          sum += (double)-0.3135971496126622737;
        }
      } else {
        sum += (double)1.456627892756807707;
      }
    } else {
      sum += (double)0.000785913075753953195;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1333.500000000000227) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1277.999999999999773) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4233.999999999999091) ) ) {
          sum += (double)1.305706232244318254;
        } else {
          sum += (double)-0.07859996070124951328;
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1221.999999999999773) ) ) {
          sum += (double)2.780565509280643166;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02707275000000000306) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02240485000000000393) ) ) {
              sum += (double)0.5162259974100116278;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-597.9999999999998863) ) ) {
                sum += (double)3.808382161458333748;
              } else {
                sum += (double)0.9129808262416295728;
              }
            }
          } else {
            sum += (double)-0.2527280445340313597;
          }
        }
      }
    } else {
      sum += (double)-2.864789047241210973;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02509105000000000363) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-869.9999999999998863) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1017.999999999999886) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)97.50000000000001421) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01017715000000000113) ) ) {
                  sum += (double)1.352917156219482386;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1221.999999999999773) ) ) {
                    sum += (double)-2.31775862375895203;
                  } else {
                    sum += (double)0.5837846374511718173;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)107.5000000000000142) ) ) {
                  sum += (double)-4.247591872442336935;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01049225000000000158) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1689.999999999999773) ) ) {
                      sum += (double)-2.964973316192627273;
                    } else {
                      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00825941000000000175) ) ) {
                        sum += (double)1.134754530588785837;
                      } else {
                        sum += (double)-1.883701986425063257;
                      }
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01348340000000000129) ) ) {
                      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)208.5000000000000284) ) ) {
                        sum += (double)-0.222950397838245773;
                      } else {
                        sum += (double)2.686937174589737687;
                      }
                    } else {
                      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0200860500000000046) ) ) {
                        sum += (double)-2.284668426513671857;
                      } else {
                        sum += (double)0.136974129676818851;
                      }
                    }
                  }
                }
              }
            } else {
              sum += (double)-2.164122216360909956;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-817.9999999999998863) ) ) {
              sum += (double)2.180917257070541293;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1244.500000000000227) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)17.50000000000000355) ) ) {
                  sum += (double)-2.255123861212479763;
                } else {
                  sum += (double)-0.5010027253158448879;
                }
              } else {
                sum += (double)1.859686306544712897;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)783.5000000000001137) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-365.9999999999999432) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)101.5000000000000142) ) ) {
                sum += (double)-1.68770820753914963;
              } else {
                sum += (double)-0.01287672508330572375;
              }
            } else {
              sum += (double)0.2709474734629794823;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05140305000000000568) ) ) {
              sum += (double)-3.739396820068359606;
            } else {
              sum += (double)-0.180482204755147313;
            }
          }
        }
      } else {
        sum += (double)1.647619304141482832;
      }
    } else {
      sum += (double)0.0007449214877861839003;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1277.999999999999773) ) ) {
      sum += (double)0.04238500699605027289;
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1221.999999999999773) ) ) {
        sum += (double)2.641537264231089033;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01980560000000000306) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1193.999999999999773) ) ) {
            sum += (double)-1.068084396015514193;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01355995000000000117) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01137435000000000182) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009738155000000000075) ) ) {
                  sum += (double)0.4078647937842692639;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01002745000000000199) ) ) {
                    sum += (double)2.906793578790158872;
                  } else {
                    sum += (double)0.9005113638648691854;
                  }
                }
              } else {
                sum += (double)-0.2193129278796767112;
              }
            } else {
              sum += (double)1.079156803731041059;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02102715000000000486) ) ) {
            sum += (double)-2.402443077450707065;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-777.9999999999998863) ) ) {
              sum += (double)1.826452276841649569;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)462.0000000000000568) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)70.00000000000001421) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-565.9999999999998863) ) ) {
                    sum += (double)-1.608625332814342501;
                  } else {
                    sum += (double)0.8393991582533892881;
                  }
                } else {
                  sum += (double)-3.072366480673513145;
                }
              } else {
                sum += (double)1.973962478637695472;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02509105000000000363) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-869.9999999999998863) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1017.999999999999886) ) ) {
              sum += (double)-0.697225655449761339;
            } else {
              sum += (double)-2.055916124979654924;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-817.9999999999998863) ) ) {
              sum += (double)2.071871399879455566;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9593020000000002101) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-177.9999999999999716) ) ) {
                  sum += (double)2.991025717118207083;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8830370000000001829) ) ) {
                    sum += (double)-2.906338229546180152;
                  } else {
                    sum += (double)1.388638884445716704;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-37.99999999999999289) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-93.99999999999998579) ) ) {
                    sum += (double)-0.594975406597978429;
                  } else {
                    sum += (double)-2.566300077696104243;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01348340000000000129) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5.999999999999999112) ) ) {
                      sum += (double)1.256325828738328987;
                    } else {
                      sum += (double)-0.5670574879528853529;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)902.0000000000001137) ) ) {
                      sum += (double)0.293015690195075007;
                    } else {
                      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1270.000000000000227) ) ) {
                        sum += (double)-3.171426786695207944;
                      } else {
                        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01614810000000000204) ) ) {
                          sum += (double)-1.150509124332004252;
                        } else {
                          sum += (double)1.229897855362802161;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-0.05255103174203671484;
        }
      } else {
        sum += (double)1.565238380432129039;
      }
    } else {
      sum += (double)0.0007076754009373368822;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1333.500000000000227) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1277.999999999999773) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4233.999999999999091) ) ) {
          sum += (double)1.23830162741921157;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01537025000000000197) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01210165000000000199) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2217.999999999999545) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00807545500000000048) ) ) {
                  sum += (double)0.2201748752593994107;
                } else {
                  sum += (double)-1.455987488821651077;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1601.999999999999773) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009289325000000002788) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00807545500000000048) ) ) {
                      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1861.999999999999773) ) ) {
                        sum += (double)-0.7855224791027251019;
                      } else {
                        sum += (double)2.460462918488875772;
                      }
                    } else {
                      sum += (double)3.292472871144612956;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009934485000000001578) ) ) {
                      sum += (double)-3.901688919067383132;
                    } else {
                      sum += (double)1.31416428883870462;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008889115000000001252) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)166.5000000000000284) ) ) {
                      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)89.50000000000001421) ) ) {
                        sum += (double)-0.6149688720703125888;
                      } else {
                        sum += (double)-4.52041925702776215;
                      }
                    } else {
                      sum += (double)1.097711797860952521;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)104.5000000000000142) ) ) {
                      sum += (double)1.415264591417814799;
                    } else {
                      sum += (double)-0.6627963015907689659;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)68.50000000000001421) ) ) {
                sum += (double)-0.9628896193070846099;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)172.5000000000000284) ) ) {
                  sum += (double)4.181698486328125242;
                } else {
                  sum += (double)1.609826396760486666;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01625345000000000609) ) ) {
              sum += (double)-2.554773457845052054;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1969.999999999999773) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03427285000000000748) ) ) {
                  sum += (double)1.91229808910472987;
                } else {
                  sum += (double)-0.3937825520833333481;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1689.999999999999773) ) ) {
                  sum += (double)-3.606334642263559154;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1481.999999999999773) ) ) {
                    sum += (double)1.990216340689823671;
                  } else {
                    sum += (double)-1.816341482626425252;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1221.999999999999773) ) ) {
          sum += (double)2.509460356428816485;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06777680000000001204) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007467930000000001095) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)63.50000000000000711) ) ) {
                sum += (double)-1.49057721156699996;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-897.9999999999998863) ) ) {
                  sum += (double)2.283951372419084969;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-501.9999999999999432) ) ) {
                    sum += (double)-1.521542222764757035;
                  } else {
                    sum += (double)0.9342025259266728554;
                  }
                }
              }
            } else {
              sum += (double)0.5310601482501609016;
            }
          } else {
            sum += (double)-1.248216247558593839;
          }
        }
      }
    } else {
      sum += (double)-2.631022510528564951;
    }
  } else {
    sum += (double)-0.001279365432802736548;
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1105.999999999999773) ) ) {
      sum += (double)0.07319743966316172301;
    } else {
      sum += (double)0.446649376535367848;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02509105000000000363) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-869.9999999999998863) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1017.999999999999886) ) ) {
              sum += (double)-0.6623004219267103476;
            } else {
              sum += (double)-1.95305633544921875;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-817.9999999999998863) ) ) {
              sum += (double)1.96834176778793335;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9593020000000002101) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-177.9999999999999716) ) ) {
                  sum += (double)2.841538384381462556;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8830370000000001829) ) ) {
                    sum += (double)-2.760957365769606486;
                  } else {
                    sum += (double)1.319270903488685365;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-37.99999999999999289) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-93.99999999999998579) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0156507000000000035) ) ) {
                      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-701.9999999999998863) ) ) {
                        sum += (double)-1.626640933492909502;
                      } else {
                        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-417.9999999999999432) ) ) {
                          sum += (double)0.04505517742749987065;
                        } else {
                          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-197.9999999999999716) ) ) {
                            sum += (double)-0.8394346580672927827;
                          } else {
                            sum += (double)-0.1054461402149253629;
                          }
                        }
                      }
                    } else {
                      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01831050000000000386) ) ) {
                        sum += (double)-1.76906440064713788;
                      } else {
                        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02279410000000000117) ) ) {
                          sum += (double)-0.1104461056369167998;
                        } else {
                          sum += (double)-1.772259695265028245;
                        }
                      }
                    }
                  } else {
                    sum += (double)-2.437921152888117504;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01273305000000000096) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01251765000000000343) ) ) {
                      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5.999999999999999112) ) ) {
                        sum += (double)1.54643053478664827;
                      } else {
                        sum += (double)-0.5089637016904527966;
                      }
                    } else {
                      sum += (double)-2.824859973362514154;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)802.0000000000001137) ) ) {
                      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)702.0000000000001137) ) ) {
                        sum += (double)0.09441474012149278505;
                      } else {
                        sum += (double)2.955974373994050275;
                      }
                    } else {
                      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1226.000000000000227) ) ) {
                        sum += (double)-2.092021309245716498;
                      } else {
                        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01482065000000000118) ) ) {
                          sum += (double)-1.831279457939995581;
                        } else {
                          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1842.000000000000227) ) ) {
                            sum += (double)2.278293793542044643;
                          } else {
                            sum += (double)-0.01125974858060796273;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-365.9999999999999432) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-417.9999999999999432) ) ) {
              sum += (double)-0.3426341296957551297;
            } else {
              sum += (double)-2.760065536499023864;
            }
          } else {
            sum += (double)0.1531277177933447475;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01634985000000000258) ) ) {
          sum += (double)-0.2581289018903459853;
        } else {
          sum += (double)2.178522563430498327;
        }
      }
    } else {
      sum += (double)0.0007362599039774958987;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1333.500000000000227) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)40.50000000000000711) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)38.50000000000000711) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007617155000000001321) ) ) {
            sum += (double)-0.8155801455179849668;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01012445000000000185) ) ) {
              sum += (double)2.915326812419485769;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1481.999999999999773) ) ) {
                sum += (double)1.949648889681188102;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-377.9999999999999432) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01645640000000000297) ) ) {
                    sum += (double)0.52507829251496696;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)23.50000000000000355) ) ) {
                      sum += (double)-3.244695754278274169;
                    } else {
                      sum += (double)-0.3734414559823495683;
                    }
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-81.99999999999998579) ) ) {
                    sum += (double)2.906571261088053859;
                  } else {
                    sum += (double)-0.6959067702293396662;
                  }
                }
              }
            }
          }
        } else {
          sum += (double)3.090553034906802221;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06777680000000001204) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1417.999999999999773) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)66.50000000000001421) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01818390000000000284) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)58.50000000000000711) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)49.50000000000000711) ) ) {
                    sum += (double)-2.334705753326415945;
                  } else {
                    sum += (double)3.293938972836448986;
                  }
                } else {
                  sum += (double)-2.235400915145874023;
                }
              } else {
                sum += (double)-2.924439697265625249;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)75.50000000000001421) ) ) {
                sum += (double)1.409143350479450829;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)78.50000000000001421) ) ) {
                  sum += (double)-2.56896042596726204;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1601.999999999999773) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2085.999999999999545) ) ) {
                      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0104385000000000016) ) ) {
                        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00807545500000000048) ) ) {
                          sum += (double)1.312728468577067042;
                        } else {
                          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)197.5000000000000284) ) ) {
                            sum += (double)-1.278356679280599151;
                          } else {
                            sum += (double)-3.45095156965584593;
                          }
                        }
                      } else {
                        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2853.999999999999545) ) ) {
                          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)172.5000000000000284) ) ) {
                            sum += (double)0.2450370348416842092;
                          } else {
                            sum += (double)3.907776077933933667;
                          }
                        } else {
                          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01537025000000000197) ) ) {
                            sum += (double)1.373655414581298917;
                          } else {
                            sum += (double)-2.86258470535278331;
                          }
                        }
                      }
                    } else {
                      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01482065000000000118) ) ) {
                        sum += (double)1.981122415521171964;
                      } else {
                        sum += (double)-0.9835377502441406961;
                      }
                    }
                  } else {
                    sum += (double)-1.127916503279176474;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)315.5000000000000568) ) ) {
              sum += (double)0.3333346626975319804;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)822.0000000000001137) ) ) {
                sum += (double)1.176136566508900083;
              } else {
                sum += (double)-1.916683444976806872;
              }
            }
          }
        } else {
          sum += (double)-1.732352161407470836;
        }
      }
    } else {
      sum += (double)-2.515268325805664063;
    }
  } else {
    sum += (double)-0.001154627285481661832;
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)10.50000000000000178) ) ) {
      sum += (double)2.641622893015544093;
    } else {
      sum += (double)0.2959712040549830614;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)124.5000000000000142) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)106.5000000000000142) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1105.999999999999773) ) ) {
              sum += (double)-1.650204969572540925;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)846.0000000000001137) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)758.0000000000001137) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03890825000000000533) ) ) {
                    sum += (double)-0.2460644152316159572;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)52.50000000000000711) ) ) {
                      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-185.9999999999999716) ) ) {
                        sum += (double)1.039705413818359458;
                      } else {
                        sum += (double)-2.293391044616698959;
                      }
                    } else {
                      sum += (double)-3.736706078052520752;
                    }
                  }
                } else {
                  sum += (double)2.270565895412279378;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.240185500000000024) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01054655000000000176) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1198.000000000000227) ) ) {
                      sum += (double)1.786444664001464844;
                    } else {
                      sum += (double)-1.466093487209743973;
                    }
                  } else {
                    sum += (double)-2.351435041026908923;
                  }
                } else {
                  sum += (double)1.113064887126286928;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)718.0000000000001137) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008412265000000000367) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007976505000000001788) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)116.5000000000000142) ) ) {
                    sum += (double)0.5621915817260741965;
                  } else {
                    sum += (double)-2.913913036528088085;
                  }
                } else {
                  sum += (double)2.197724266052246023;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)302.0000000000000568) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)106.0000000000000142) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-137.9999999999999716) ) ) {
                      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0184335500000000034) ) ) {
                        sum += (double)-1.964387626321906666;
                      } else {
                        sum += (double)0.09308027085803805001;
                      }
                    } else {
                      sum += (double)-3.45561095017653308;
                    }
                  } else {
                    sum += (double)1.037455368041992232;
                  }
                } else {
                  sum += (double)-5.309621330543801143;
                }
              }
            } else {
              sum += (double)2.176136898172312595;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01202925000000000175) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)128.5000000000000284) ) ) {
              sum += (double)1.720243928697374303;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1350.000000000000227) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)926.0000000000001137) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)322.0000000000000568) ) ) {
                    sum += (double)-0.5179653834119255507;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)154.5000000000000284) ) ) {
                      sum += (double)-0.1473103523254394587;
                    } else {
                      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)226.5000000000000284) ) ) {
                        sum += (double)-4.659873336791991782;
                      } else {
                        sum += (double)-1.691727965732790384;
                      }
                    }
                  }
                } else {
                  sum += (double)2.481063823699951598;
                }
              } else {
                sum += (double)-2.921503055796903947;
              }
            }
          } else {
            sum += (double)0.08674411681581169209;
          }
        }
      } else {
        sum += (double)1.145115768909454435;
      }
    } else {
      sum += (double)0.0007586310003860588687;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)10.50000000000000178) ) ) {
      sum += (double)2.509541765848795958;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)70.50000000000001421) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)51.50000000000000711) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)16.50000000000000355) ) ) {
            sum += (double)-1.806725784301757898;
          } else {
            sum += (double)0.4720665673895196868;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-517.9999999999998863) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)68.50000000000001421) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-597.9999999999998863) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1689.999999999999773) ) ) {
                  sum += (double)-1.911624433077298679;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1221.999999999999773) ) ) {
                    sum += (double)2.534255716535780412;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1085.999999999999773) ) ) {
                      sum += (double)-2.505433618454706135;
                    } else {
                      sum += (double)0.07676551196039939351;
                    }
                  }
                }
              } else {
                sum += (double)-3.12134824232621666;
              }
            } else {
              sum += (double)-3.222715789794921903;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-61.99999999999999289) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)62.50000000000000711) ) ) {
                sum += (double)-0.06421986564261014663;
              } else {
                sum += (double)2.633836332048689055;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)94.00000000000001421) ) ) {
                sum += (double)-2.993967385725541774;
              } else {
                sum += (double)0.2412596157618931425;
              }
            }
          }
        }
      } else {
        sum += (double)0.42672927573655417;
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7791330000000000755) ) ) {
        sum += (double)-2.620239777035183515;
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)124.5000000000000142) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)106.5000000000000142) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1105.999999999999773) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)59.50000000000000711) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)31.50000000000000355) ) ) {
                    sum += (double)-1.297521781921386896;
                  } else {
                    sum += (double)-4.543810871669224483;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)74.50000000000001421) ) ) {
                    sum += (double)0.607529678344726598;
                  } else {
                    sum += (double)-1.773723355461569673;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)846.0000000000001137) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)758.0000000000001137) ) ) {
                    sum += (double)-0.2586848398095388801;
                  } else {
                    sum += (double)2.157037602300229562;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2142.000000000000455) ) ) {
                    sum += (double)-1.838966596694219691;
                  } else {
                    sum += (double)0.3611577957063107913;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)718.0000000000001137) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)302.0000000000000568) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)106.0000000000000142) ) ) {
                    sum += (double)-1.449403239246383812;
                  } else {
                    sum += (double)0.9855826520919800382;
                  }
                } else {
                  sum += (double)-3.543463998682358618;
                }
              } else {
                sum += (double)2.067330077598835025;
              }
            }
          } else {
            sum += (double)-0.1896049279286125822;
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-401.9999999999999432) ) ) {
            sum += (double)-0.3978589814284752002;
          } else {
            sum += (double)2.31888441903250575;
          }
        }
      }
    } else {
      sum += (double)0.0007206994399896018196;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    sum += (double)0.2847920961983932409;
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04281455000000000677) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)478.0000000000000568) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-201.9999999999999716) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-245.9999999999999716) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-277.9999999999999432) ) ) {
                sum += (double)-0.4750965415622314669;
              } else {
                sum += (double)1.679999293703021479;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01831050000000000386) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)114.5000000000000142) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)63.50000000000000711) ) ) {
                    sum += (double)-3.151730439469621281;
                  } else {
                    sum += (double)0.9308933921482251961;
                  }
                } else {
                  sum += (double)-4.812127486519191422;
                }
              } else {
                sum += (double)0.9668214692009819977;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)40.50000000000000711) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01223965000000000122) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5.999999999999999112) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)33.50000000000000711) ) ) {
                    sum += (double)2.511271589452570563;
                  } else {
                    sum += (double)-0.3212762832641601896;
                  }
                } else {
                  sum += (double)-0.5622321861377661545;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1.00000001800250948e-35) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0171043500000000008) ) ) {
                    sum += (double)-5.723337030410767134;
                  } else {
                    sum += (double)-2.092666435241699485;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)194.0000000000000284) ) ) {
                    sum += (double)0.4749843597412109486;
                  } else {
                    sum += (double)-2.766265882294753453;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01781075000000000366) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)69.50000000000001421) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)102.0000000000000142) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-29.99999999999999645) ) ) {
                      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-81.99999999999998579) ) ) {
                        sum += (double)-0.08339341611278300315;
                      } else {
                        sum += (double)3.446154507723722116;
                      }
                    } else {
                      sum += (double)-1.0966916792463548;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)186.0000000000000284) ) ) {
                      sum += (double)2.87440421694800996;
                    } else {
                      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01302835000000000278) ) ) {
                        sum += (double)-0.06065547526383600202;
                      } else {
                        sum += (double)2.94874366477683747;
                      }
                    }
                  }
                } else {
                  sum += (double)-0.4026968394052821698;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)170.0000000000000284) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)57.50000000000000711) ) ) {
                    sum += (double)2.827006895401898756;
                  } else {
                    sum += (double)0.6471168818394782418;
                  }
                } else {
                  sum += (double)-0.2700858933585030819;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)510.0000000000000568) ) ) {
            sum += (double)-2.573421050520504405;
          } else {
            sum += (double)-0.5479681433877684471;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)97.50000000000001421) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.240185500000000024) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)31.50000000000000355) ) ) {
              sum += (double)-0.8444294124841690286;
            } else {
              sum += (double)-3.037424987401717846;
            }
          } else {
            sum += (double)0.8831302790806211389;
          }
        } else {
          sum += (double)0.4450520284316119568;
        }
      }
    } else {
      sum += (double)0.0006846644852198735878;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)10.50000000000000178) ) ) {
      sum += (double)2.369825108846028705;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)172.5000000000000284) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)162.5000000000000284) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-301.9999999999999432) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-341.9999999999999432) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)16.50000000000000355) ) ) {
                sum += (double)-2.461043566749209432;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)110.5000000000000142) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)108.5000000000000142) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)100.5000000000000142) ) ) {
                      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3633.999999999999545) ) ) {
                        sum += (double)2.294806658837102997;
                      } else {
                        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2597.999999999999545) ) ) {
                          sum += (double)-1.661353190191861007;
                        } else {
                          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02629825000000000565) ) ) {
                            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01614810000000000204) ) ) {
                              sum += (double)0.1409716899912346333;
                            } else {
                              sum += (double)-1.134588960920061451;
                            }
                          } else {
                            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-701.9999999999998863) ) ) {
                              sum += (double)4.207589975992838127;
                            } else {
                              sum += (double)-1.416194222190163332;
                            }
                          }
                        }
                      }
                    } else {
                      sum += (double)1.190546714968797604;
                    }
                  } else {
                    sum += (double)-3.446565673828124954;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)123.5000000000000142) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007301295000000000181) ) ) {
                      sum += (double)-1.033561786015828599;
                    } else {
                      sum += (double)1.931428727479738816;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008338595000000002463) ) ) {
                      sum += (double)1.841200872567983815;
                    } else {
                      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)138.5000000000000284) ) ) {
                        sum += (double)-1.366924433274702588;
                      } else {
                        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-841.9999999999998863) ) ) {
                          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009738155000000000075) ) ) {
                            sum += (double)-0.3526756668090820224;
                          } else {
                            sum += (double)2.894539272423946485;
                          }
                        } else {
                          sum += (double)-1.454034328460693359;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              sum += (double)-2.292539385202768454;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009069620000000002194) ) ) {
              sum += (double)1.42301769391864763;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009641040000000001761) ) ) {
                sum += (double)-1.781620773614621456;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)66.50000000000001421) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.50000000000000711) ) ) {
                    sum += (double)2.308473836458646566;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)46.50000000000000711) ) ) {
                      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)42.50000000000000711) ) ) {
                        sum += (double)-0.03120717135342684911;
                      } else {
                        sum += (double)-4.473583929879324295;
                      }
                    } else {
                      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)51.50000000000000711) ) ) {
                        sum += (double)2.695404069320015417;
                      } else {
                        sum += (double)-0.5556047116793119134;
                      }
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01757245000000000335) ) ) {
                    sum += (double)1.838168767402912129;
                  } else {
                    sum += (double)-0.05570855410593860552;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-965.9999999999998863) ) ) {
            sum += (double)-3.545597549438476825;
          } else {
            sum += (double)-0.2264029026031494363;
          }
        }
      } else {
        sum += (double)0.5762829143613983351;
      }
    }
  } else {
    sum += (double)-0.0009030824955947786871;
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    sum += (double)0.2570248552055597879;
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)124.5000000000000142) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)106.5000000000000142) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1105.999999999999773) ) ) {
              sum += (double)-1.462555571690501877;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)846.0000000000001137) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)758.0000000000001137) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03585245000000000098) ) ) {
                    sum += (double)-0.2025376809486695573;
                  } else {
                    sum += (double)-1.389495418288491102;
                  }
                } else {
                  sum += (double)2.077918226822562886;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2142.000000000000455) ) ) {
                  sum += (double)-1.71975893941866298;
                } else {
                  sum += (double)0.2099184956550598224;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)718.0000000000001137) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008412265000000000367) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007976505000000001788) ) ) {
                  sum += (double)-0.9653812231019487378;
                } else {
                  sum += (double)2.213730411529541087;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)302.0000000000000568) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009590715000000001392) ) ) {
                    sum += (double)-2.759896891457694235;
                  } else {
                    sum += (double)-0.9283285505977677543;
                  }
                } else {
                  sum += (double)-4.837284949973778225;
                }
              }
            } else {
              sum += (double)1.984558697404532612;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01202925000000000175) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)129.5000000000000284) ) ) {
              sum += (double)1.397897437523151432;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)133.5000000000000284) ) ) {
                sum += (double)-3.3562027143395472;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1350.000000000000227) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)822.0000000000001137) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)322.0000000000000568) ) ) {
                      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9.999999999999998224) ) ) {
                        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-101.9999999999999858) ) ) {
                          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)142.5000000000000284) ) ) {
                            sum += (double)1.692040450484664449;
                          } else {
                            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)148.5000000000000284) ) ) {
                              sum += (double)-3.31586600593898595;
                            } else {
                              sum += (double)-0.4627057779615170729;
                            }
                          }
                        } else {
                          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008412265000000000367) ) ) {
                            sum += (double)-3.818360301426479086;
                          } else {
                            sum += (double)-0.9661403309215199631;
                          }
                        }
                      } else {
                        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)281.5000000000000568) ) ) {
                          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)241.5000000000000284) ) ) {
                            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008696525000000001823) ) ) {
                              sum += (double)-1.688243787428912235;
                            } else {
                              sum += (double)1.017250532717318245;
                            }
                          } else {
                            sum += (double)-2.658196449279785156;
                          }
                        } else {
                          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01002745000000000199) ) ) {
                            sum += (double)2.353192198903937271;
                          } else {
                            sum += (double)-0.5548927001953124494;
                          }
                        }
                      }
                    } else {
                      sum += (double)-1.800212042981928384;
                    }
                  } else {
                    sum += (double)1.645924811527647025;
                  }
                } else {
                  sum += (double)-2.768124914169311612;
                }
              }
            }
          } else {
            sum += (double)0.1008422676050280825;
          }
        }
      } else {
        sum += (double)1.066289317607879594;
      }
    } else {
      sum += (double)0.0006955853743350967492;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    sum += (double)0.2814722770696298504;
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)123.5000000000000142) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)119.5000000000000142) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.006115895000000000532) ) ) {
            sum += (double)-2.722873819791353789;
          } else {
            sum += (double)-0.3935214817255745512;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01038445000000000167) ) ) {
            sum += (double)-3.425920152664184926;
          } else {
            sum += (double)-0.3954093355121034992;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01310225000000000105) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1773.999999999999773) ) ) {
            sum += (double)-2.661498079299926989;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)128.5000000000000284) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-201.9999999999999716) ) ) {
                sum += (double)-0.560724506378173837;
              } else {
                sum += (double)2.624874823434012683;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1085.999999999999773) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008557765000000001898) ) ) {
                  sum += (double)-0.5854382428255948678;
                } else {
                  sum += (double)2.433669388599884797;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)132.5000000000000284) ) ) {
                  sum += (double)-3.300412096296037934;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-797.9999999999998863) ) ) {
                    sum += (double)-2.073887485504150696;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01251765000000000343) ) ) {
                      sum += (double)-0.2578116013242023885;
                    } else {
                      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)289.5000000000000568) ) ) {
                        sum += (double)-0.6955042481422424316;
                      } else {
                        sum += (double)-4.62597589038667234;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)299.5000000000000568) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01413270000000000151) ) ) {
              sum += (double)1.943257068580305003;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0165670500000000033) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)150.5000000000000284) ) ) {
                  sum += (double)1.341689403533935732;
                } else {
                  sum += (double)-1.495316234164767888;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-229.9999999999999716) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01966205000000000383) ) ) {
                    sum += (double)-2.668797747294108458;
                  } else {
                    sum += (double)0.2945701057733927097;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01757245000000000335) ) ) {
                    sum += (double)3.434351759245901636;
                  } else {
                    sum += (double)0.7216169121580304768;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04281455000000000677) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03205925000000000441) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)466.5000000000000568) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)598.0000000000001137) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02087210000000000454) ) ) {
                      sum += (double)-0.9813247577564135904;
                    } else {
                      sum += (double)-3.448114782571792603;
                    }
                  } else {
                    sum += (double)1.187716093063354572;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-817.9999999999998863) ) ) {
                    sum += (double)-2.18347295379638684;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02186325000000000421) ) ) {
                      sum += (double)0.3071110519202979727;
                    } else {
                      sum += (double)2.614867272487906735;
                    }
                  }
                }
              } else {
                sum += (double)-2.913693756527370837;
              }
            } else {
              sum += (double)0.2900654863901916403;
            }
          }
        }
      }
    } else {
      sum += (double)0.0006585246591425046418;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    sum += (double)0.2673986544561991474;
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)123.5000000000000142) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)119.5000000000000142) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.006115895000000000532) ) ) {
            sum += (double)-2.58673010606032161;
          } else {
            sum += (double)-0.373845405593468072;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01038445000000000167) ) ) {
            sum += (double)-3.254624128341674805;
          } else {
            sum += (double)-0.3756389097733931481;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01310225000000000105) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1689.999999999999773) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2389.999999999999545) ) ) {
              sum += (double)-0.3059941291809082364;
            } else {
              sum += (double)-4.300477671623229803;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1085.999999999999773) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)214.5000000000000284) ) ) {
                sum += (double)0.01945404052734375083;
              } else {
                sum += (double)3.060745818039466659;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)128.5000000000000284) ) ) {
                sum += (double)1.451299398085650338;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)132.5000000000000284) ) ) {
                  sum += (double)-3.135391535077776126;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00825941000000000175) ) ) {
                    sum += (double)0.2159918136926956833;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1402.000000000000227) ) ) {
                      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)822.0000000000001137) ) ) {
                        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008826590000000002212) ) ) {
                          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)158.5000000000000284) ) ) {
                            sum += (double)0.948250325520833437;
                          } else {
                            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)380.5000000000000568) ) ) {
                              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008486020000000002103) ) ) {
                                sum += (double)-1.748753373519233989;
                              } else {
                                sum += (double)-5.187499959128244242;
                              }
                            } else {
                              sum += (double)-0.6713121032714843839;
                            }
                          }
                        } else {
                          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)334.0000000000000568) ) ) {
                            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-701.9999999999998863) ) ) {
                              sum += (double)-1.729081809303977257;
                            } else {
                              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01054655000000000176) ) ) {
                                sum += (double)0.5041348635878193374;
                              } else {
                                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)285.5000000000000568) ) ) {
                                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-257.9999999999999432) ) ) {
                                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)160.5000000000000284) ) ) {
                                      sum += (double)-2.842128471091941666;
                                    } else {
                                      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)186.5000000000000284) ) ) {
                                        sum += (double)2.182898677479137017;
                                      } else {
                                        sum += (double)-1.625684521993001397;
                                      }
                                    }
                                  } else {
                                    sum += (double)0.771713424590696806;
                                  }
                                } else {
                                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)611.5000000000001137) ) ) {
                                    sum += (double)-3.155980714838555912;
                                  } else {
                                    sum += (double)0.5987150045541617116;
                                  }
                                }
                              }
                            }
                          } else {
                            sum += (double)-1.882296735048294201;
                          }
                        }
                      } else {
                        sum += (double)1.457833900451660281;
                      }
                    } else {
                      sum += (double)-2.714138513141208353;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01404605000000000263) ) ) {
            sum += (double)1.392359195508455105;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
              sum += (double)0.04987816065802841425;
            } else {
              sum += (double)2.2444666348970852;
            }
          }
        }
      }
    } else {
      sum += (double)0.000625598447909688285;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    sum += (double)0.2540287309708481045;
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)123.5000000000000142) ) ) {
        sum += (double)-0.4029015100242307468;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01310225000000000105) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1773.999999999999773) ) ) {
            sum += (double)-2.42324758529663109;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1085.999999999999773) ) ) {
              sum += (double)1.190180355952336289;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)128.5000000000000284) ) ) {
                sum += (double)1.378734461466471384;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)132.5000000000000284) ) ) {
                  sum += (double)-2.978621973310198179;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00825941000000000175) ) ) {
                    sum += (double)0.2051921844482421931;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1402.000000000000227) ) ) {
                      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)902.0000000000001137) ) ) {
                        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008826590000000002212) ) ) {
                          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)158.5000000000000284) ) ) {
                            sum += (double)1.042746002197265653;
                          } else {
                            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)380.5000000000000568) ) ) {
                              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008486020000000002103) ) ) {
                                sum += (double)-1.66131563601286536;
                              } else {
                                sum += (double)-4.928124959128243887;
                              }
                            } else {
                              sum += (double)-0.3490861256917318078;
                            }
                          }
                        } else {
                          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)334.0000000000000568) ) ) {
                            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-701.9999999999998863) ) ) {
                              sum += (double)-1.642627702192826833;
                            } else {
                              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009641040000000001761) ) ) {
                                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009493430000000002353) ) ) {
                                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009339625000000002439) ) ) {
                                    sum += (double)1.037765555381775062;
                                  } else {
                                    sum += (double)-2.428626441955566762;
                                  }
                                } else {
                                  sum += (double)3.34654666355678021;
                                }
                              } else {
                                sum += (double)-0.4044422351341593336;
                              }
                            }
                          } else {
                            sum += (double)-1.631083140961111511;
                          }
                        }
                      } else {
                        sum += (double)1.801072502136230602;
                      }
                    } else {
                      sum += (double)-2.578431553310818192;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)315.5000000000000568) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01413270000000000151) ) ) {
              sum += (double)1.674554753621419367;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0165670500000000033) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)150.5000000000000284) ) ) {
                  sum += (double)1.272111019134521515;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01517625000000000224) ) ) {
                    sum += (double)0.05718891062635056421;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)14.00000000000000178) ) ) {
                      sum += (double)-4.729464767456054375;
                    } else {
                      sum += (double)-0.553525352478027366;
                    }
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-229.9999999999999716) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-937.9999999999998863) ) ) {
                    sum += (double)0.7232560497872970728;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03014560000000000503) ) ) {
                      sum += (double)-1.967610829876315082;
                    } else {
                      sum += (double)0.3910839353288923514;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01757245000000000335) ) ) {
                    sum += (double)3.26641608967500563;
                  } else {
                    sum += (double)0.642551073241314108;
                  }
                }
              }
            }
          } else {
            sum += (double)-0.255069614753563545;
          }
        }
      }
    } else {
      sum += (double)0.0005943185079302325258;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1333.500000000000227) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)214.5000000000000284) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01162965000000000179) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)202.5000000000000284) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01150015000000000238) ) ) {
              sum += (double)0.08644174484979538775;
            } else {
              sum += (double)-2.831574928760528742;
            }
          } else {
            sum += (double)-3.073680088437837021;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01245045000000000179) ) ) {
            sum += (double)1.792823207161643229;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)174.5000000000000284) ) ) {
              sum += (double)0.1645467318789497202;
            } else {
              sum += (double)2.971075988538337764;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01922215000000000382) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0156507000000000035) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2389.999999999999545) ) ) {
              sum += (double)2.565919005870819447;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0119618500000000013) ) ) {
                sum += (double)0.852155389267796437;
              } else {
                sum += (double)-0.4523449466342017722;
              }
            }
          } else {
            sum += (double)3.23715625270720464;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)315.5000000000000568) ) ) {
            sum += (double)-1.537776487013873039;
          } else {
            sum += (double)0.5678742985976369395;
          }
        }
      }
    } else {
      sum += (double)-1.983608790806361544;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)123.5000000000000142) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)119.5000000000000142) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.006115895000000000532) ) ) {
            sum += (double)-2.437248567434457946;
          } else {
            sum += (double)-0.3350080617532964489;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01038445000000000167) ) ) {
            sum += (double)-3.071747839450836182;
          } else {
            sum += (double)-0.336711837306167161;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01310225000000000105) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1689.999999999999773) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2389.999999999999545) ) ) {
              sum += (double)-0.1695320042696866203;
            } else {
              sum += (double)-4.009459304809570135;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1085.999999999999773) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)214.5000000000000284) ) ) {
                sum += (double)-0.0410276412963867243;
              } else {
                sum += (double)2.848199528661267799;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01251765000000000343) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)128.5000000000000284) ) ) {
                  sum += (double)1.689374043990154561;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)132.5000000000000284) ) ) {
                    sum += (double)-2.829690851484026215;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-797.9999999999998863) ) ) {
                      sum += (double)-2.257438748381858762;
                    } else {
                      sum += (double)-0.2104256389050335463;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)14.00000000000000178) ) ) {
                  sum += (double)-0.9041869299752373079;
                } else {
                  sum += (double)-4.070728683471680043;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)315.5000000000000568) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01413270000000000151) ) ) {
              sum += (double)1.590827026367187536;
            } else {
              sum += (double)0.2970329813918863304;
            }
          } else {
            sum += (double)-0.2423161341056664364;
          }
        }
      }
    } else {
      sum += (double)0.0005646025848768578687;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1333.500000000000227) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)214.5000000000000284) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01162965000000000179) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)202.5000000000000284) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01150015000000000238) ) ) {
              sum += (double)0.0821196559118846231;
            } else {
              sum += (double)-2.689996170997619895;
            }
          } else {
            sum += (double)-2.919996116901266259;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01245045000000000179) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01223965000000000122) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01182555000000000238) ) ) {
                sum += (double)3.258887154715402357;
              } else {
                sum += (double)0.584295509110635769;
              }
            } else {
              sum += (double)3.625708926807750032;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)174.5000000000000284) ) ) {
              sum += (double)0.1563193760617241357;
            } else {
              sum += (double)2.822522157611269122;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01922215000000000382) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0156507000000000035) ) ) {
            sum += (double)0.6883338279101676171;
          } else {
            sum += (double)3.075298500061035334;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)315.5000000000000568) ) ) {
            sum += (double)-1.460887643402698055;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03530790000000001011) ) ) {
              sum += (double)-0.4762746550820091129;
            } else {
              sum += (double)1.936143887042999445;
            }
          }
        }
      }
    } else {
      sum += (double)-1.884428478422619069;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)124.5000000000000142) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8830370000000001829) ) ) {
          sum += (double)-2.215165848202175436;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9593020000000002101) ) ) {
            sum += (double)1.33913705084058976;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.006115895000000000532) ) ) {
              sum += (double)-2.315386111919696344;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.240185500000000024) ) ) {
                sum += (double)-0.3700235604145818979;
              } else {
                sum += (double)0.8711403307367544535;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01310225000000000105) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)128.5000000000000284) ) ) {
            sum += (double)1.463706738898094883;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)132.5000000000000284) ) ) {
              sum += (double)-2.345587428923576301;
            } else {
              sum += (double)-0.3545531969150875762;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)299.5000000000000568) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01404605000000000263) ) ) {
              sum += (double)1.653987839818000793;
            } else {
              sum += (double)0.2955101848849289725;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04281455000000000677) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03205925000000000441) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)466.5000000000000568) ) ) {
                  sum += (double)-1.200280219789535252;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02240485000000000393) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.014385700000000003) ) ) {
                      sum += (double)1.728998955090840672;
                    } else {
                      sum += (double)-0.5868543523152669472;
                    }
                  } else {
                    sum += (double)1.884579627458439433;
                  }
                }
              } else {
                sum += (double)-2.771447112825181858;
              }
            } else {
              sum += (double)0.2890374707050077929;
            }
          }
        }
      }
    } else {
      sum += (double)0.0005363724789901675371;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1690.000000000000227) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)682.0000000000001137) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)498.0000000000000568) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)394.0000000000000568) ) ) {
            sum += (double)0.2425347497287454746;
          } else {
            sum += (double)1.973631470778892893;
          }
        } else {
          sum += (double)-1.309189033508300959;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)63.50000000000000711) ) ) {
          sum += (double)-0.2281594184137160086;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)118.5000000000000142) ) ) {
            sum += (double)3.988884502649307606;
          } else {
            sum += (double)0.5961872010003953504;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2274.000000000000455) ) ) {
        sum += (double)-2.640931354869495706;
      } else {
        sum += (double)0.3090362548828125;
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-305.9999999999999432) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)659.5000000000001137) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-417.9999999999999432) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-497.9999999999999432) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)70.50000000000001421) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)68.50000000000001421) ) ) {
                  sum += (double)-0.7742208986140010074;
                } else {
                  sum += (double)-3.54467912153764253;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)76.50000000000001421) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-617.9999999999998863) ) ) {
                    sum += (double)-0.5120634569440569717;
                  } else {
                    sum += (double)3.288291819890340584;
                  }
                } else {
                  sum += (double)-0.3247733006733271033;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)84.50000000000001421) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-457.9999999999999432) ) ) {
                  sum += (double)2.831830363119802296;
                } else {
                  sum += (double)0.3550209590366908419;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)220.5000000000000284) ) ) {
                  sum += (double)-2.610180070665147678;
                } else {
                  sum += (double)1.222158269528989649;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)199.5000000000000284) ) ) {
              sum += (double)-0.8380719988686697874;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-389.9999999999999432) ) ) {
                sum += (double)-3.414227430282100961;
              } else {
                sum += (double)-0.7997984458660257756;
              }
            }
          }
        } else {
          sum += (double)1.271865509174488373;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8830370000000001829) ) ) {
          sum += (double)-1.466190314292907804;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9203175000000001216) ) ) {
            sum += (double)2.492363953590393422;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)24.50000000000000355) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-185.9999999999999716) ) ) {
                sum += (double)1.174276624407087022;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)758.0000000000001137) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)18.50000000000000355) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)12.50000000000000178) ) ) {
                      sum += (double)-1.463934035528273725;
                    } else {
                      sum += (double)-5.462973442077636577;
                    }
                  } else {
                    sum += (double)-0.3504360613615616904;
                  }
                } else {
                  sum += (double)0.6936821789577090058;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)27.50000000000000355) ) ) {
                sum += (double)1.902200658056471205;
              } else {
                sum += (double)-0.05698842653585584062;
              }
            }
          }
        }
      }
    } else {
      sum += (double)0.0005122242853617509735;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01936015000000000305) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)197.5000000000000284) ) ) {
        sum += (double)-3.610951432727632415;
      } else {
        sum += (double)-0.2302103500366211031;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)25.50000000000000355) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.240185500000000024) ) ) {
          sum += (double)-2.520329433017307164;
        } else {
          sum += (double)-0.08680031299591065008;
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1017.999999999999886) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)277.5000000000000568) ) ) {
            sum += (double)-2.14036365509033244;
          } else {
            sum += (double)-0.835331296920776456;
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-701.9999999999998863) ) ) {
            sum += (double)2.533797683715820259;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)466.5000000000000568) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03246165000000000855) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)214.0000000000000284) ) ) {
                  sum += (double)0.627698581695556701;
                } else {
                  sum += (double)-3.07824954032897935;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-93.99999999999998579) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)341.5000000000000568) ) ) {
                    sum += (double)-1.389111298008969042;
                  } else {
                    sum += (double)1.184188169240951494;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04370805000000000523) ) ) {
                    sum += (double)1.801593431933172784;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)277.5000000000000568) ) ) {
                      sum += (double)1.191560344283397299;
                    } else {
                      sum += (double)0.7351954122384389834;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)594.5000000000001137) ) ) {
                sum += (double)-0.9126584243774413796;
              } else {
                sum += (double)-1.816685781478882156;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009235095000000000456) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)130.5000000000000284) ) ) {
        sum += (double)0.007335277002834757892;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)134.5000000000000284) ) ) {
            sum += (double)-4.257153065999349728;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007617155000000001321) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)265.5000000000000568) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-897.9999999999998863) ) ) {
                  sum += (double)2.374771897336269699;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-505.9999999999999432) ) ) {
                    sum += (double)-1.603781700134277344;
                  } else {
                    sum += (double)1.041748279772306773;
                  }
                }
              } else {
                sum += (double)-0.4963625015751008118;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)220.5000000000000284) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)199.5000000000000284) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1689.999999999999773) ) ) {
                    sum += (double)1.819268970489502202;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-565.9999999999998863) ) ) {
                      sum += (double)-2.353169356126052048;
                    } else {
                      sum += (double)-0.3736844062805175781;
                    }
                  }
                } else {
                  sum += (double)-3.447229206815679348;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-469.9999999999999432) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008170265000000001207) ) ) {
                    sum += (double)-0.7296086606112394124;
                  } else {
                    sum += (double)1.628079075060392844;
                  }
                } else {
                  sum += (double)-0.5544036599534067911;
                }
              }
            }
          }
        } else {
          sum += (double)0.003772185443922071793;
        }
      }
    } else {
      sum += (double)-3.328261953450886983e-07;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1333.500000000000227) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)837.5000000000001137) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)440.5000000000000568) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)364.5000000000000568) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07251305000000000944) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0483103000000000074) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04191690000000000693) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)17.50000000000000355) ) ) {
                    sum += (double)-1.80069805013722406;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)356.5000000000000568) ) ) {
                      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)214.5000000000000284) ) ) {
                        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02222255000000000411) ) ) {
                          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)197.5000000000000284) ) ) {
                            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01517625000000000224) ) ) {
                              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01340995000000000208) ) ) {
                                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0132556500000000025) ) ) {
                                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01302835000000000278) ) ) {
                                    sum += (double)0.2513152287418681241;
                                  } else {
                                    sum += (double)4.067706842422485813;
                                  }
                                } else {
                                  sum += (double)-2.465172278362771863;
                                }
                              } else {
                                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)112.5000000000000142) ) ) {
                                  sum += (double)2.194934321558752899;
                                } else {
                                  sum += (double)-0.3737912178039550781;
                                }
                              }
                            } else {
                              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01545895000000000082) ) ) {
                                sum += (double)-2.363565177917480664;
                              } else {
                                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01614810000000000204) ) ) {
                                  sum += (double)1.713610257857885122;
                                } else {
                                  sum += (double)-0.1344859759012858313;
                                }
                              }
                            }
                          } else {
                            sum += (double)-1.332360005782822654;
                          }
                        } else {
                          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02421650000000000538) ) ) {
                            sum += (double)3.015397206942240782;
                          } else {
                            sum += (double)0.712619785426818253;
                          }
                        }
                      } else {
                        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01950935000000000516) ) ) {
                          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0156507000000000035) ) ) {
                            sum += (double)0.8257437130500531186;
                          } else {
                            sum += (double)3.651375725155785013;
                          }
                        } else {
                          sum += (double)-0.7978189641779119823;
                        }
                      }
                    } else {
                      sum += (double)-1.74933597564697263;
                    }
                  }
                } else {
                  sum += (double)-2.422184944152832031;
                }
              } else {
                sum += (double)2.365713500976562411;
              }
            } else {
              sum += (double)-1.237048807144165208;
            }
          } else {
            sum += (double)1.696431967269542485;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0100741500000000022) ) ) {
            sum += (double)-1.274414876989416356;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)627.5000000000001137) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)493.5000000000000568) ) ) {
                sum += (double)-0.6905765533447265625;
              } else {
                sum += (double)3.056119946071079951;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)696.5000000000001137) ) ) {
                sum += (double)-2.144800758361816495;
              } else {
                sum += (double)0.212353121001144951;
              }
            }
          }
        }
      } else {
        sum += (double)2.446028253767225991;
      }
    } else {
      sum += (double)-1.603571739196777202;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07886890000000000567) ) ) {
        sum += (double)-0.1988313373369661741;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)25.50000000000000355) ) ) {
          sum += (double)-0.6851875892326013684;
        } else {
          sum += (double)0.5080504639477996243;
        }
      }
    } else {
      sum += (double)0.0004506700067675163093;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01936015000000000305) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)197.5000000000000284) ) ) {
        sum += (double)-3.420462235950288754;
      } else {
        sum += (double)-0.2087583312988281203;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)102.5000000000000142) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.240185500000000024) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-485.9999999999999432) ) ) {
            sum += (double)-1.266939845838044754;
          } else {
            sum += (double)-4.077741786411830383;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)25.50000000000000355) ) ) {
            sum += (double)-0.04820091610863095483;
          } else {
            sum += (double)1.312662029479231274;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03957025000000000819) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)410.0000000000000568) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-245.9999999999999716) ) ) {
              sum += (double)2.670109932763236049;
            } else {
              sum += (double)0.9765969030318721877;
            }
          } else {
            sum += (double)-0.9470791141192118623;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)277.5000000000000568) ) ) {
            sum += (double)-2.200036561489105313;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)466.5000000000000568) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06057575000000000459) ) ) {
                sum += (double)1.203688080170575381;
              } else {
                sum += (double)0.268392711877822876;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06057575000000000459) ) ) {
                sum += (double)-2.770112171173095827;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07251305000000000944) ) ) {
                  sum += (double)0.06100708961486816378;
                } else {
                  sum += (double)-0.6307782491048177231;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009235095000000000456) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)130.5000000000000284) ) ) {
        sum += (double)0.006972767105281854789;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)134.5000000000000284) ) ) {
            sum += (double)-4.045607550938924213;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007617155000000001321) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)265.5000000000000568) ) ) {
                sum += (double)0.9897059383162534196;
              } else {
                sum += (double)-0.4736586868122059646;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)220.5000000000000284) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)197.5000000000000284) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1689.999999999999773) ) ) {
                    sum += (double)1.722492046356201234;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-565.9999999999998863) ) ) {
                      sum += (double)-2.351995754241943626;
                    } else {
                      sum += (double)-0.2695079518255786843;
                    }
                  }
                } else {
                  sum += (double)-3.200344996549645327;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-469.9999999999999432) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008170265000000001207) ) ) {
                    sum += (double)-0.6849136213822798469;
                  } else {
                    sum += (double)1.537038409584447152;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-37.99999999999999289) ) ) {
                    sum += (double)-1.290963028888313158;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)294.0000000000000568) ) ) {
                      sum += (double)1.25149822569729996;
                    } else {
                      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)782.0000000000001137) ) ) {
                        sum += (double)-2.771999633789062667;
                      } else {
                        sum += (double)0.9301423754010882394;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          sum += (double)0.003561042674361671045;
        }
      }
    } else {
      sum += (double)-2.050056000965460565e-05;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1690.000000000000227) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)682.0000000000001137) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)498.0000000000000568) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)394.0000000000000568) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007467930000000001095) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)63.50000000000000711) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-697.9999999999998863) ) ) {
                  sum += (double)-2.469829235076904439;
                } else {
                  sum += (double)0.3255289996111834783;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-897.9999999999998863) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007102530000000000995) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1861.999999999999773) ) ) {
                      sum += (double)-0.2256640392801036177;
                    } else {
                      sum += (double)2.605354452133179066;
                    }
                  } else {
                    sum += (double)-0.9355185582087589546;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)172.5000000000000284) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-501.9999999999999432) ) ) {
                      sum += (double)-1.811184516319861659;
                    } else {
                      sum += (double)2.183027516878568441;
                    }
                  } else {
                    sum += (double)-2.530588255257442132;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007617155000000001321) ) ) {
                sum += (double)4.150158691406249822;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)298.0000000000000568) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)202.0000000000000284) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)54.00000000000000711) ) ) {
                      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)6.000000000000000888) ) ) {
                        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)54.50000000000000711) ) ) {
                          sum += (double)0.6893952699896788161;
                        } else {
                          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007864580000000001223) ) ) {
                            sum += (double)1.797958529197563493;
                          } else {
                            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)84.50000000000001421) ) ) {
                              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01340995000000000208) ) ) {
                                sum += (double)-0.6781732799720204818;
                              } else {
                                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01537025000000000197) ) ) {
                                  sum += (double)2.811670900980631771;
                                } else {
                                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)59.50000000000000711) ) ) {
                                    sum += (double)-2.377146191067165848;
                                  } else {
                                    sum += (double)0.3241742555085603272;
                                  }
                                }
                              }
                            } else {
                              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)86.50000000000001421) ) ) {
                                sum += (double)2.912066335263459926;
                              } else {
                                sum += (double)0.2194922113858244761;
                              }
                            }
                          }
                        }
                      } else {
                        sum += (double)3.00753404443914274;
                      }
                    } else {
                      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)94.00000000000001421) ) ) {
                        sum += (double)-2.583130709330241359;
                      } else {
                        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)144.5000000000000284) ) ) {
                          sum += (double)1.057421112060547008;
                        } else {
                          sum += (double)-1.598736658963290092;
                        }
                      }
                    }
                  } else {
                    sum += (double)2.034297025203704923;
                  }
                } else {
                  sum += (double)-1.771470496768043468;
                }
              }
            }
          } else {
            sum += (double)1.873145728275694033;
          }
        } else {
          sum += (double)-1.27196657585375239;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)63.50000000000000711) ) ) {
          sum += (double)-0.2215885531517767237;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)118.5000000000000142) ) ) {
            sum += (double)3.779988521337509511;
          } else {
            sum += (double)0.5536743754432315034;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2274.000000000000455) ) ) {
        sum += (double)-2.540611596540971462;
      } else {
        sum += (double)0.2995752122667100781;
      }
    }
  } else {
    sum += (double)-0.0003986743432453968526;
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)10.50000000000000178) ) ) {
      sum += (double)2.799563702670010645;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)16.50000000000000355) ) ) {
        sum += (double)-2.615818182627360322;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1881085000000000396) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)466.5000000000000568) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)682.0000000000001137) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)364.5000000000000568) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01162965000000000179) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01150015000000000238) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)59.50000000000000711) ) ) {
                      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00774926000000000087) ) ) {
                        sum += (double)-0.6096452417507978172;
                      } else {
                        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-965.9999999999998863) ) ) {
                          sum += (double)2.463641060723198883;
                        } else {
                          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-777.9999999999998863) ) ) {
                            sum += (double)-1.611822277566661077;
                          } else {
                            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01012445000000000185) ) ) {
                              sum += (double)1.362877043238226005;
                            } else {
                              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-401.9999999999999432) ) ) {
                                sum += (double)1.419534977999600711;
                              } else {
                                sum += (double)-2.201751724243164343;
                              }
                            }
                          }
                        }
                      }
                    } else {
                      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007864580000000001223) ) ) {
                        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007467930000000001095) ) ) {
                          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1481.999999999999773) ) ) {
                            sum += (double)1.590531366521662049;
                          } else {
                            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-501.9999999999999432) ) ) {
                              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-897.9999999999998863) ) ) {
                                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007102530000000000995) ) ) {
                                  sum += (double)1.690704994201660316;
                                } else {
                                  sum += (double)-1.544288286955460388;
                                }
                              } else {
                                sum += (double)-2.40697315216064478;
                              }
                            } else {
                              sum += (double)1.291223981645372332;
                            }
                          }
                        } else {
                          sum += (double)1.92755365616235963;
                        }
                      } else {
                        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)46.00000000000000711) ) ) {
                          sum += (double)-0.1637240671667253011;
                        } else {
                          sum += (double)-1.888243722015956694;
                        }
                      }
                    }
                  } else {
                    sum += (double)-1.971638364791870046;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01182555000000000238) ) ) {
                    sum += (double)3.031506595611572763;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)438.0000000000000568) ) ) {
                      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)298.0000000000000568) ) ) {
                        sum += (double)0.3917506222281597061;
                      } else {
                        sum += (double)-3.041214408874511665;
                      }
                    } else {
                      sum += (double)2.55808457874116435;
                    }
                  }
                }
              } else {
                sum += (double)1.245278789813702103;
              }
            } else {
              sum += (double)1.097534502585103322;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02186325000000000421) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01818390000000000284) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)627.5000000000001137) ) ) {
                  sum += (double)-0.9420044427630545059;
                } else {
                  sum += (double)0.7221416473388672097;
                }
              } else {
                sum += (double)-3.666555282592773413;
              }
            } else {
              sum += (double)1.042997068925337389;
            }
          }
        } else {
          sum += (double)-1.763766039334810687;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)4506.000000000000909) ) ) {
        sum += (double)-0.2637017456500465595;
      } else {
        sum += (double)1.04397375287086347;
      }
    } else {
      sum += (double)0.0004130452967790693782;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)10.50000000000000178) ) ) {
      sum += (double)2.659585467251723845;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)16.50000000000000355) ) ) {
        sum += (double)-2.485027233759562471;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1881085000000000396) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)466.5000000000000568) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)682.0000000000001137) ) ) {
              sum += (double)0.2041933873691046952;
            } else {
              sum += (double)1.04265777557853645;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02186325000000000421) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01818390000000000284) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)627.5000000000001137) ) ) {
                  sum += (double)-0.8949042265442597177;
                } else {
                  sum += (double)0.6860345162285699239;
                }
              } else {
                sum += (double)-3.483227554321288721;
              }
            } else {
              sum += (double)0.9908472234552556657;
            }
          }
        } else {
          sum += (double)-1.675577640533447266;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)4506.000000000000909) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-517.9999999999998863) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-777.9999999999998863) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1193.999999999999773) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1277.999999999999773) ) ) {
                sum += (double)-0.4140566904241868018;
              } else {
                sum += (double)-2.736131486892700693;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01033360000000000181) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)113.5000000000000142) ) ) {
                  sum += (double)0.519558147355622002;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)217.5000000000000284) ) ) {
                    sum += (double)-3.202799563937716698;
                  } else {
                    sum += (double)-0.2584364103234332855;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01156380000000000081) ) ) {
                  sum += (double)2.224765063870337567;
                } else {
                  sum += (double)0.4251344133825862848;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)71.50000000000001421) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)52.50000000000000711) ) ) {
                sum += (double)0.03707566034226190965;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-677.9999999999998863) ) ) {
                  sum += (double)-5.176329803466797053;
                } else {
                  sum += (double)-2.416414491753829275;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)321.5000000000000568) ) ) {
                sum += (double)-0.2922131971335311107;
              } else {
                sum += (double)-2.390547742599096193;
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-417.9999999999999432) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)104.5000000000000142) ) ) {
              sum += (double)1.238980105473445059;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008412265000000000367) ) ) {
                sum += (double)2.485938753400530388;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009445230000000000639) ) ) {
                  sum += (double)-3.294207454863048667;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)156.5000000000000284) ) ) {
                    sum += (double)-1.844660203353218453;
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-457.9999999999999432) ) ) {
                      sum += (double)-0.2462104435320253693;
                    } else {
                      sum += (double)2.097647283388221151;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-405.9999999999999432) ) ) {
              sum += (double)-2.254830140333909494;
            } else {
              sum += (double)-0.2312293295136019777;
            }
          }
        }
      } else {
        sum += (double)0.9917750466103648632;
      }
    } else {
      sum += (double)0.00039239303226667392;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)10.50000000000000178) ) ) {
      sum += (double)2.526606247641823622;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)16.50000000000000355) ) ) {
        sum += (double)-2.360775899887085139;
      } else {
        sum += (double)0.1720266131361536943;
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7791330000000000755) ) ) {
        sum += (double)-2.288958535875593281;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8404545000000001043) ) ) {
          sum += (double)1.806585377913255019;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8921000000000001151) ) ) {
            sum += (double)-2.788904228210449254;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-517.9999999999998863) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-565.9999999999998863) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)348.5000000000000568) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)188.5000000000000284) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)170.5000000000000284) ) ) {
                      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)160.5000000000000284) ) ) {
                        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)150.5000000000000284) ) ) {
                          sum += (double)-0.461443358844088547;
                        } else {
                          sum += (double)-2.199662363970721568;
                        }
                      } else {
                        sum += (double)1.415595796373155579;
                      }
                    } else {
                      sum += (double)-1.830927438446969591;
                    }
                  } else {
                    sum += (double)0.4356429783157680369;
                  }
                } else {
                  sum += (double)-1.024095506462261884;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)122.5000000000000142) ) ) {
                  sum += (double)-0.7831478573027110812;
                } else {
                  sum += (double)-3.575830450512114123;
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-417.9999999999999432) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)78.50000000000001421) ) ) {
                  sum += (double)1.266373774084714299;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)327.5000000000000568) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)261.5000000000000568) ) ) {
                      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)199.5000000000000284) ) ) {
                        sum += (double)-0.4458145824231599663;
                      } else {
                        sum += (double)1.705835237174198715;
                      }
                    } else {
                      sum += (double)-2.111406964063644587;
                    }
                  } else {
                    sum += (double)2.092588947559224977;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-405.9999999999999432) ) ) {
                  sum += (double)-2.423884416663128594;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1130.500000000000227) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)897.5000000000001137) ) ) {
                      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)580.5000000000001137) ) ) {
                        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)289.5000000000000568) ) ) {
                          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)257.5000000000000568) ) ) {
                            sum += (double)-0.1825858080477277268;
                          } else {
                            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)294.0000000000000568) ) ) {
                              sum += (double)0.1250127368503146652;
                            } else {
                              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)630.0000000000001137) ) ) {
                                sum += (double)3.548733075459798769;
                              } else {
                                sum += (double)0.2030570411682128817;
                              }
                            }
                          }
                        } else {
                          sum += (double)-0.6672292522925057368;
                        }
                      } else {
                        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)783.5000000000001137) ) ) {
                          sum += (double)1.467390774425707534;
                        } else {
                          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)837.5000000000001137) ) ) {
                            sum += (double)-2.297608828544616788;
                          } else {
                            sum += (double)1.236379350934710075;
                          }
                        }
                      }
                    } else {
                      sum += (double)-1.982996356487274348;
                    }
                  } else {
                    sum += (double)1.107442479255871914;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      sum += (double)0.0003727733827830622629;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    sum += (double)0.1604496173054218988;
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7791330000000000755) ) ) {
        sum += (double)-2.174510632242475427;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8404545000000001043) ) ) {
          sum += (double)1.716256126990685305;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8921000000000001151) ) ) {
            sum += (double)-2.649459075927734553;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-517.9999999999998863) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-565.9999999999998863) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02399630000000000166) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01446935000000000061) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01259295000000000206) ) ) {
                      sum += (double)-0.4809307292418378843;
                    } else {
                      sum += (double)0.982354881514364231;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01537025000000000197) ) ) {
                      sum += (double)-3.272823128876862775;
                    } else {
                      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-713.9999999999998863) ) ) {
                        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1017.999999999999886) ) ) {
                          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1313.999999999999773) ) ) {
                            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2853.999999999999545) ) ) {
                              sum += (double)-1.592126383100237241;
                            } else {
                              sum += (double)1.439842564126719626;
                            }
                          } else {
                            sum += (double)-3.392344892941988377;
                          }
                        } else {
                          sum += (double)1.152911890470064593;
                        }
                      } else {
                        sum += (double)-2.09518948605186095;
                      }
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02882555000000000187) ) ) {
                    sum += (double)1.519721020878972206;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03700630000000000586) ) ) {
                      sum += (double)-1.315531260792802026;
                    } else {
                      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05776445000000000191) ) ) {
                        sum += (double)1.271955244881766367;
                      } else {
                        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07886890000000000567) ) ) {
                          sum += (double)-2.528824834823608647;
                        } else {
                          sum += (double)0.135742517253931827;
                        }
                      }
                    }
                  }
                }
              } else {
                sum += (double)-1.628339840116955095;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-417.9999999999999432) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008412265000000000367) ) ) {
                  sum += (double)1.573783485706035989;
                } else {
                  sum += (double)0.2881392227636801473;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-405.9999999999999432) ) ) {
                  sum += (double)-2.302690099633258214;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)4506.000000000000909) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1270.000000000000227) ) ) {
                      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9966610000000001302) ) ) {
                        sum += (double)-0.1770873920373938204;
                      } else {
                        sum += (double)1.449574237399631205;
                      }
                    } else {
                      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01094635000000000226) ) ) {
                        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2142.000000000000455) ) ) {
                          sum += (double)-2.743146938747829999;
                        } else {
                          sum += (double)0.5206839084625244363;
                        }
                      } else {
                        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01237795000000000041) ) ) {
                          sum += (double)2.226051359910231398;
                        } else {
                          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01371860000000000267) ) ) {
                            sum += (double)-2.322121699651082505;
                          } else {
                            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1454.000000000000227) ) ) {
                              sum += (double)1.200765974625297439;
                            } else {
                              sum += (double)-0.7403113771783242925;
                            }
                          }
                        }
                      }
                    }
                  } else {
                    sum += (double)0.9455629598860646468;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      sum += (double)0.0003541347104627231386;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)10.50000000000000178) ) ) {
      sum += (double)2.392253372885964069;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)16.50000000000000355) ) ) {
        sum += (double)-2.250759601593017578;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1881085000000000396) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)54.50000000000000711) ) ) {
            sum += (double)0.5165494077118785166;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007864580000000001223) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007467930000000001095) ) ) {
                sum += (double)0.1737566020876862294;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007617155000000001321) ) ) {
                  sum += (double)3.572647201538085682;
                } else {
                  sum += (double)1.0053625864525364;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01162965000000000179) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01150015000000000238) ) ) {
                  sum += (double)-0.2010515410449543738;
                } else {
                  sum += (double)-1.915943060980902946;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)611.5000000000001137) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)479.5000000000000568) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)416.5000000000000568) ) ) {
                      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02707275000000000306) ) ) {
                        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)174.5000000000000284) ) ) {
                          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01245045000000000179) ) ) {
                            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)108.5000000000000142) ) ) {
                              sum += (double)2.70426338391426313;
                            } else {
                              sum += (double)0.1390984959072537053;
                            }
                          } else {
                            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)150.5000000000000284) ) ) {
                              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)80.50000000000001421) ) ) {
                                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)75.50000000000001421) ) ) {
                                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01340995000000000208) ) ) {
                                    sum += (double)-1.510077804174178695;
                                  } else {
                                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01818390000000000284) ) ) {
                                      sum += (double)1.407411216735839909;
                                    } else {
                                      sum += (double)-0.4950579174494339485;
                                    }
                                  }
                                } else {
                                  sum += (double)-2.801849908828735636;
                                }
                              } else {
                                sum += (double)0.7473754348754884091;
                              }
                            } else {
                              sum += (double)-1.401424259609646228;
                            }
                          }
                        } else {
                          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)226.5000000000000284) ) ) {
                            sum += (double)3.395806471506754409;
                          } else {
                            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)265.5000000000000568) ) ) {
                              sum += (double)-1.05110900878906266;
                            } else {
                              sum += (double)1.471645770754133054;
                            }
                          }
                        }
                      } else {
                        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)148.5000000000000284) ) ) {
                          sum += (double)1.237361945175543099;
                        } else {
                          sum += (double)-1.679594691349909796;
                        }
                      }
                    } else {
                      sum += (double)-2.092087209792364177;
                    }
                  } else {
                    sum += (double)2.561461658477783399;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02186325000000000421) ) ) {
                    sum += (double)-1.977566423416137642;
                  } else {
                    sum += (double)0.3437384393480089617;
                  }
                }
              }
            }
          }
        } else {
          sum += (double)-1.608422506772554827;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7791330000000000755) ) ) {
        sum += (double)-2.065785070828029202;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8404545000000001043) ) ) {
          sum += (double)1.63044333091148963;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8921000000000001151) ) ) {
            sum += (double)-2.516986122131347869;
          } else {
            sum += (double)-0.1950823232976695021;
          }
        }
      }
    } else {
      sum += (double)0.0003364279803649998838;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    sum += (double)0.2015762925891519675;
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.006561365000000000426) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-365.9999999999999432) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-701.9999999999998863) ) ) {
            sum += (double)-2.981999397277832031;
          } else {
            sum += (double)1.78421884734055114;
          }
        } else {
          sum += (double)-2.366782096862793061;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07886890000000000567) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1122.000000000000227) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-305.9999999999999432) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-321.9999999999999432) ) ) {
                sum += (double)-0.2688015766951470931;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01340995000000000208) ) ) {
                  sum += (double)-0.2075390276701554182;
                } else {
                  sum += (double)-4.267122840881348189;
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-297.9999999999999432) ) ) {
                sum += (double)0.6460000079214287538;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8830370000000001829) ) ) {
                  sum += (double)-1.597357212413441196;
                } else {
                  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02819210000000000119) ) ) {
                      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)98.00000000000001421) ) ) {
                        sum += (double)-1.351421179771423509;
                      } else {
                        sum += (double)-4.352291946411132706;
                      }
                    } else {
                      sum += (double)-0.007187368144159732297;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-201.9999999999999716) ) ) {
                      sum += (double)-0.6822502136230469416;
                    } else {
                      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9413910000000001999) ) ) {
                        sum += (double)2.065505943298340252;
                      } else {
                        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007864580000000001223) ) ) {
                          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00774926000000000087) ) ) {
                            sum += (double)-0.1683440980457124314;
                          } else {
                            sum += (double)-2.370187528205640159;
                          }
                        } else {
                          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009007760000000001807) ) ) {
                            sum += (double)0.6452567444234935667;
                          } else {
                            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)22.00000000000000355) ) ) {
                              sum += (double)-0.2918831506098408801;
                            } else {
                              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)194.0000000000000284) ) ) {
                                sum += (double)0.7150876404291176547;
                              } else {
                                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01744815000000000602) ) ) {
                                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009738155000000000075) ) ) {
                                    sum += (double)-0.8563207738539753144;
                                  } else {
                                    sum += (double)0.4449364382610995761;
                                  }
                                } else {
                                  sum += (double)-0.7034357599143324924;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2142.000000000000455) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01038445000000000167) ) ) {
                sum += (double)-2.924649780871821481;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1842.000000000000227) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01259295000000000206) ) ) {
                    sum += (double)0.9781584765460040742;
                  } else {
                    sum += (double)-0.8830588228562299413;
                  }
                } else {
                  sum += (double)-2.681134915351867765;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01038445000000000167) ) ) {
                sum += (double)2.39484973907470744;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01273305000000000096) ) ) {
                  sum += (double)-3.260329367897727426;
                } else {
                  sum += (double)0.05132916007243412682;
                }
              }
            }
          }
        } else {
          sum += (double)0.4012351170460383698;
        }
      }
    } else {
      sum += (double)0.0003217616308085662416;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    sum += (double)0.1914974886100488938;
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.006561365000000000426) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-365.9999999999999432) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-701.9999999999998863) ) ) {
            sum += (double)-2.832899427413940519;
          } else {
            sum += (double)1.695007929308661065;
          }
        } else {
          sum += (double)-2.248443023681641062;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07886890000000000567) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1122.000000000000227) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-305.9999999999999432) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-321.9999999999999432) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.006866725000000001473) ) ) {
                  sum += (double)1.407552185058593919;
                } else {
                  sum += (double)-0.2828931775629915379;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01340995000000000208) ) ) {
                  sum += (double)-0.1971621306046195676;
                } else {
                  sum += (double)-4.053766713823590884;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8830370000000001829) ) ) {
                sum += (double)-1.532980123247419169;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9796950000000000935) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9612275000000001235) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9335175000000001111) ) ) {
                      sum += (double)1.895453048706055021;
                    } else {
                      sum += (double)-1.01057046743539658;
                    }
                  } else {
                    sum += (double)3.014352093572202129;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007864580000000001223) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007617155000000001321) ) ) {
                      sum += (double)-0.06387182156715168202;
                    } else {
                      sum += (double)-1.478739440917968828;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009007760000000001807) ) ) {
                      sum += (double)0.5852398003850665109;
                    } else {
                      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)902.0000000000001137) ) ) {
                        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)702.0000000000001137) ) ) {
                          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)662.0000000000001137) ) ) {
                            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)490.0000000000000568) ) ) {
                              sum += (double)0.000137493872000810758;
                            } else {
                              sum += (double)-0.721739284720963381;
                            }
                          } else {
                            sum += (double)-2.6833359972635904;
                          }
                        } else {
                          sum += (double)1.114456024709737703;
                        }
                      } else {
                        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01868860000000000313) ) ) {
                          sum += (double)-0.3007200660705566797;
                        } else {
                          sum += (double)-3.22160701751709011;
                        }
                      }
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2142.000000000000455) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01038445000000000167) ) ) {
                sum += (double)-2.778417273128733989;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1842.000000000000227) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01176025000000000161) ) ) {
                    sum += (double)1.307460983276367283;
                  } else {
                    sum += (double)-0.6918731725215911954;
                  }
                } else {
                  sum += (double)-2.54707821210225438;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2622.000000000000455) ) ) {
                sum += (double)1.721982765197753951;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)4506.000000000000909) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01340995000000000208) ) ) {
                    sum += (double)-0.5138956140588830657;
                  } else {
                    sum += (double)-2.871082164930260916;
                  }
                } else {
                  sum += (double)0.2297505795955658014;
                }
              }
            }
          }
        } else {
          sum += (double)0.3811733665282527883;
        }
      }
    } else {
      sum += (double)0.0003056735572712768255;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)40.50000000000000711) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007467930000000001095) ) ) {
        sum += (double)-1.201613867282867565;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01012445000000000185) ) ) {
          sum += (double)2.56207898712158233;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06378020000000002299) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)37.50000000000000711) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)34.50000000000000711) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01182555000000000238) ) ) {
                  sum += (double)-1.573370673439719702;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)29.50000000000000355) ) ) {
                    sum += (double)0.3685175342324339409;
                  } else {
                    sum += (double)2.608756380495817595;
                  }
                }
              } else {
                sum += (double)-1.328283850351969386;
              }
            } else {
              sum += (double)2.353127119276258838;
            }
          } else {
            sum += (double)2.654177697499592981;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06777680000000001204) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)46.50000000000000711) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.007864580000000001223) ) ) {
            sum += (double)-2.736726724533808053;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01150015000000000238) ) ) {
              sum += (double)0.5634954452514648882;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01371860000000000267) ) ) {
                sum += (double)-3.181093673706055114;
              } else {
                sum += (double)0.221099561055501298;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)51.50000000000000711) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009179275000000002363) ) ) {
              sum += (double)-0.3533621470133463394;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01266265000000000272) ) ) {
                sum += (double)3.151385713234926111;
              } else {
                sum += (double)0.5779822939918155544;
              }
            }
          } else {
            sum += (double)0.141027879755410035;
          }
        }
      } else {
        sum += (double)-2.016017266475793157;
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.006561365000000000426) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)71.50000000000001421) ) ) {
          sum += (double)0.03775769642421177713;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)176.5000000000000284) ) ) {
            sum += (double)-2.656049588831459474;
          } else {
            sum += (double)-0.4956724503461052977;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07886890000000000567) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)16.50000000000000355) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02557070000000000523) ) ) {
              sum += (double)-0.6594908929640247441;
            } else {
              sum += (double)-3.529517230987549326;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)21.50000000000000355) ) ) {
              sum += (double)0.9104137420654296875;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)50.50000000000000711) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)49.50000000000000711) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01922215000000000382) ) ) {
                    sum += (double)-0.2040896144481973984;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)40.50000000000000711) ) ) {
                      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.50000000000000711) ) ) {
                        sum += (double)-0.3112830543518066428;
                      } else {
                        sum += (double)-3.457079852068865478;
                      }
                    } else {
                      sum += (double)-0.2148059844970703347;
                    }
                  }
                } else {
                  sum += (double)-2.692467972726532821;
                }
              } else {
                sum += (double)-0.07843941414217714403;
              }
            }
          }
        } else {
          sum += (double)0.362114689016342195;
        }
      }
    } else {
      sum += (double)0.0002903898800019988975;
    }
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)40.50000000000000711) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1481.999999999999773) ) ) {
        sum += (double)2.448944076538086101;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)38.50000000000000711) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-733.9999999999998863) ) ) {
            sum += (double)-1.004642870846916614;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01645640000000000297) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00807545500000000048) ) ) {
                sum += (double)-0.7376505938443270738;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009493430000000002353) ) ) {
                  sum += (double)3.281685187599876041;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0119618500000000013) ) ) {
                    sum += (double)-0.06115030749090786394;
                  } else {
                    sum += (double)2.135341112954276088;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)26.50000000000000355) ) ) {
                sum += (double)0.9192170739173889382;
              } else {
                sum += (double)-2.309578791531649689;
              }
            }
          }
        } else {
          sum += (double)3.016817838495427839;
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06777680000000001204) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)46.50000000000000711) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-321.9999999999999432) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-713.9999999999998863) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009289325000000002788) ) ) {
                sum += (double)-2.621547376192533196;
              } else {
                sum += (double)-0.01869877901944247064;
              }
            } else {
              sum += (double)3.239238357543945401;
            }
          } else {
            sum += (double)-2.612878476656400384;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)51.50000000000000711) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009179275000000002363) ) ) {
              sum += (double)-0.3356940092863860414;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01266265000000000272) ) ) {
                sum += (double)2.993816405076247023;
              } else {
                sum += (double)0.5490832555861699937;
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5221.999999999999091) ) ) {
              sum += (double)1.948341883783755168;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2426.000000000000455) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1562.000000000000227) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)682.0000000000001137) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)110.5000000000000142) ) ) {
                      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)108.5000000000000142) ) ) {
                        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1689.999999999999773) ) ) {
                          sum += (double)-0.796727957589285829;
                        } else {
                          sum += (double)0.1504319957239710903;
                        }
                      } else {
                        sum += (double)-2.394273815733013677;
                      }
                    } else {
                      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)102.0000000000000142) ) ) {
                        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-49.99999999999999289) ) ) {
                          sum += (double)0.2589887182546216637;
                        } else {
                          sum += (double)1.975187403361002625;
                        }
                      } else {
                        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)202.0000000000000284) ) ) {
                          sum += (double)-3.036810477574666489;
                        } else {
                          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)229.5000000000000284) ) ) {
                            sum += (double)-1.701873189752752147;
                          } else {
                            sum += (double)2.110417232513428054;
                          }
                        }
                      }
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)79.50000000000001421) ) ) {
                      sum += (double)-0.4020668506622314675;
                    } else {
                      sum += (double)1.911687760786576762;
                    }
                  }
                } else {
                  sum += (double)-2.096024293165940744;
                }
              } else {
                sum += (double)1.821261138916015598;
              }
            }
          }
        }
      } else {
        sum += (double)-1.915216457482540324;
      }
    }
  } else {
    sum += (double)-0.0003154795678610773538;
  }
  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.9997434999999998961) ) ) {
    sum += (double)0.1641851561315672559;
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.006561365000000000426) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-365.9999999999999432) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-701.9999999999998863) ) ) {
            sum += (double)-2.597776460647583274;
          } else {
            sum += (double)1.651933380653118455;
          }
        } else {
          sum += (double)-2.080336135864258029;
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1122.000000000000227) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9.999999999999998224) ) ) {
            sum += (double)-0.156643301842067123;
          } else {
            if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-1.00000001800250948e-35) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03246165000000000855) ) ) {
                sum += (double)-3.535945159196853815;
              } else {
                sum += (double)0.1661115696263867902;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)194.0000000000000284) ) ) {
                sum += (double)0.4060192037219844119;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01744815000000000602) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)926.0000000000001137) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01340995000000000208) ) ) {
                      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)386.0000000000000568) ) ) {
                        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01259295000000000206) ) ) {
                          sum += (double)0.4610644757959767026;
                        } else {
                          sum += (double)-1.961012533436650829;
                        }
                      } else {
                        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)758.0000000000001137) ) ) {
                          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)582.0000000000001137) ) ) {
                            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)510.0000000000000568) ) ) {
                              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.00876145500000000306) ) ) {
                                sum += (double)-3.020436232430594448;
                              } else {
                                sum += (double)-0.6313064816631848153;
                              }
                            } else {
                              sum += (double)1.157830558939183074;
                            }
                          } else {
                            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)630.0000000000001137) ) ) {
                              sum += (double)-4.6516826820373538;
                            } else {
                              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01002745000000000199) ) ) {
                                sum += (double)-3.08792520002885329;
                              } else {
                                sum += (double)0.6598199037405161338;
                              }
                            }
                          }
                        } else {
                          sum += (double)0.7141195367883752532;
                        }
                      }
                    } else {
                      sum += (double)0.7820350283143149284;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01088875000000000086) ) ) {
                      sum += (double)2.659542867115565645;
                    } else {
                      sum += (double)0.3082032203674316406;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01980560000000000306) ) ) {
                    sum += (double)-2.187732618826407016;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05776445000000000191) ) ) {
                      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03585245000000000098) ) ) {
                        sum += (double)0.2316549003124237227;
                      } else {
                        sum += (double)-3.073247609819684811;
                      }
                    } else {
                      sum += (double)0.9442987053482622128;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)2142.000000000000455) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01038445000000000167) ) ) {
              sum += (double)-2.634603380689434005;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1842.000000000000227) ) ) {
                sum += (double)-0.123793315887451183;
              } else {
                sum += (double)-2.400359956423441687;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01038445000000000167) ) ) {
              sum += (double)2.245768089294433612;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01273305000000000096) ) ) {
                sum += (double)-3.084032804315740339;
              } else {
                sum += (double)0.1882052974024815417;
              }
            }
          }
        }
      }
    } else {
      sum += (double)0.0002916443709783175927;
    }
  }

  sum = sum + (double)(0);
  if (!pred_margin) {
    return pred_transform(sum);
  } else {
    return sum;
  }
}
